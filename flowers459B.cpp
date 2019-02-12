/*
* @Author: SyedAli
* @Date:   2019-01-10 16:19:17
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-20 17:32:54
*/
#include<bits/stdc++.h>
using namespace std;
#define _LL __int64
#define mod 1000000007
int a[1000005];
int main()
{
    int n;
    scanf("%d",&n);
    int min1=mod;
    int max1=-1;
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&a[i]);
        min1=min(min1,a[i]);
        max1=max(max1,a[i]);
    }
    long long ans1=0,ans2=0;
    for(int i = 0;i < n;i++)
    {
        if(a[i]==min1)
            ans1++;
        else if(a[i]==max1)
            ans2++;
    }
    long long ans=0;
    if(ans1==n)
    {
        ans=ans1*(ans1-1)/2;
    }
    else
        ans=ans1*ans2;
    printf("%d %I64d\n",max1-min1,ans);
    return 0;
}