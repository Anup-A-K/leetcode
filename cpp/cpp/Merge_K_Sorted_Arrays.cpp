#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here.
    vector<int> result;

    for(int i=0; i<k; i++)
    {
        for(int j=0; j<kArrays[i].size(); j++)
        {
            result.push_back(kArrays[i][j]);
        }
    }

    sort(result.begin(), result.end());

    return result; 
}
