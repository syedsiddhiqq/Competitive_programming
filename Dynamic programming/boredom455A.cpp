/*
* @Author: SyedAli
* @Date:   2019-01-13 17:08:15
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-13 17:10:57
*/

#include<bits/stdc++.h>
int a[100005];
long long int dp[100005],count[100005]={0};
int main()
{
 int t=0,i,n;

 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  t=fmax(a[i],t);
  count[a[i]]++;
 }
 dp[0]=0;
 dp[1]=count[1];
 for(i=2;i<=t;i++){
 	dp[i]=fmax(dp[i-1],dp[i-2]+(i*count[i]));
 	printf("%d\n",dp[i]);
 }
 
 // printf("%lld\n",dp[t]);

 return 0;
}