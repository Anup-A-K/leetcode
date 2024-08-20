#include <bits/stdc++.h>

using namespace std;

int main()
{
    // string a = "feaabbccddeaf";
    // string b = "ffabce";
    string a = "abbcde";
    string b = "fghijabb";
    int alen = a.length();
    int blen = b.length();

    vector<string> all_common_subsequences;

    vector<vector<int>> dp(alen + 1, vector<int>(blen + 1, 0));
    for (int i = 1; i <= alen; i++)
    {
        for (int j = 1; j <= blen; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    for(int i =0;i< dp.size();i++)
    {
        for(int j =0;j<dp[0].size();j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout << "Length of longest common subsequence: " << dp[alen][blen] << endl;
    cout << "Longest common subsequence: ";
    int i = alen, j = blen;
    string lcs = "";
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            lcs = a[i - 1] + lcs;
            i--;
            j--;
        }
        else
        {
            if (dp[i - 1][j] > dp[i][j - 1])
            {
                i--;
            }
            else
            {
                j--;
            }
        }
    }
    cout << lcs << endl;
}