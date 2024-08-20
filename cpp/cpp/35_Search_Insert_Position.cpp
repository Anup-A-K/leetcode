class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(nums.size() == 0) return 0;
        int low = 0, high = nums.size()-1;
        while(low<=high)
        {
            int mid = low + (low+high)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                low = mid-1;
            else
                high = mid-1;
        }
        return nums.size();
    }
};