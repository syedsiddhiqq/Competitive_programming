/*
* @Author: SyedAli
* @Date:   2019-01-13 17:22:42
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-13 19:12:59
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int dp[n+1];
    dp[0] = 0;

    fill(dp+1, dp+(n+1), -1e4);

    for(int i=0; i<3; ++i)
    {
        int a;
        cin>>a;

        for(int j=a; j<=n; ++j)
        {
            dp[j] = max(dp[j-a]+1, dp[j]);
            // printf("%d %d\n",j,dp[j]);
        }
    }

    cout<<dp[n];


    return 0;
}