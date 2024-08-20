// class Solution {
// public:

//     int partition(vector<int>& nums, int low, int high) {
//         int pivot = nums[high];
//         int i = low - 1;

//         for (int j = low; j < high; j++) {
//             if (nums[j] < pivot) {
//                 i++;
//                 swap(nums[i], nums[j]);
//             }
//         }
//         swap(nums[i + 1], nums[high]);
//         return i + 1;
//     }

//     void quickSort(vector<int>& nums, int low, int high) {
//         if (low < high) {
//             int pi = partition(nums, low, high);

//             quickSort(nums, low, pi - 1);
//             quickSort(nums, pi + 1, high);
//         }
//     }

//     vector<int> sortArray(vector<int>& nums) {
//         int size = nums.size();
//         int low = 0;
//         int high = size - 1;

//         quickSort(nums, low, high);
//         return nums;
//     }
// };

// time complexity: O(nlogn)
// dont use built in sort function

// class Solution {
// public:
//     int partition(vector<int>& nums, int low, int high) {
//         int pivot = nums[high];
//         int i = low - 1;
//         for (int j = low; j < high; j++) {
//             if (nums[j] < pivot) {
//                 i++;
//                 swap(nums[i], nums[j]);
//             }
//         }
//         swap(nums[i + 1], nums[high]);
//         return i + 1;
//     }

//     void quickSort(vector<int>& nums, int low, int high) {
//         if (low < high) {
//             int pi = partition(nums, low, high);

//             quickSort(nums, low, pi - 1);
//             quickSort(nums, pi + 1, high);
//         }
//     }

//     vector<int> sortArray(vector<int>& nums) {
//         quickSort(nums, 0, nums.size() - 1);
//         return nums;
//     }
// };

// do bubble sort
// class Solution {
// public:
//     vector<int> sortArray(vector<int>& nums) {
//         int n = nums.size();
//         int flag = 0;
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n - i - 1; j++) {
//                 if (nums[j] > nums[j + 1]) {
//                     swap(nums[j], nums[j + 1]);
//                     flag = 1;
//                 }
//             }
//             if (flag == 0) {
//                 break;
//             }
//         }
//         return nums;      
//     }
// };


class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high) {
        int n1 = mid - low + 1;
        int n2 = high - mid;

        vector<int> L(n1);
        vector<int> R(n2);

        for (int i = 0; i < n1; i++) {
            L[i] = nums[low + i];
        }
        for (int i = 0; i < n2; i++) {
            R[i] = nums[mid + 1 + i];
        }

        int i = 0;
        int j = 0;
        int k = low;

        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                nums[k] = L[i];
                i++;
            } else {
                nums[k] = R[j];
                j++;
            }
            k++;
        }

        while (i < n1) {
            nums[k] = L[i];
            i++;
            k++;
        }

        while (j < n2) {
            nums[k] = R[j];
            j++;
            k++;
        }
    }

    void merge_sort(vector<int>& nums, int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;

            merge_sort(nums, low, mid);
            merge_sort(nums, mid + 1, high);

            merge(nums, low, mid, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums, 0, nums.size() - 1);
        return nums;
    }
};