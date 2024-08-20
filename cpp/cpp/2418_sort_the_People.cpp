class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int len = names.size();
        for(int i=0; i<len; i++)
        {
            for(int j=i+1; j<len; j++)
            {
                if(heights[i] < heights[j])
                {
                    swap(names[i], names[j]);
                    swap(heights[i], heights[j]);
                }
            }
        }
        return names;
    }
};