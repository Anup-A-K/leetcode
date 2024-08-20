class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int start = -1, end = -1;
        int low = 0, high = nums.size()-1;
        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] == target)
            {
                start = mid;
                end = mid;
                while(start-1 >= 0 && nums[start-1] == target) start--;
                while(end+1 < nums.size() && nums[end+1] == target) end++;
                break;
            }
            else if(nums[mid] < target) low = mid+1;
            else high = mid-1;
        }
        vector<int> res = {start, end};
        return res;
    }
};