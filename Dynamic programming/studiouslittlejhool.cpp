/*
* @Author: SyedAli
* @Date:   2019-01-13 14:46:46
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-13 15:00:31
*https://www.hackerearth.com/practice/algorithms/dynamic-programming/introduction-to-dynamic-programming-1/practice-problems/algorithm/studious-little-jhool/editorial/
*/


#include<bits/stdc++.h>
using namespace std;
int dp[123];
int _dp(int n){
	int res;
	if(n == 0) return 0;
	if(n<0) return 1e9;
	if(dp[n]!=-1) return dp[n];
	res = 1+min(_dp(n-12),_dp(n-10));
	return dp[n] = res;
}
int main(){
	int n;
	scanf("%d",&n);
	memset(dp,-1,sizeof dp);
	if(_dp(n)>n) printf("-1");
	else printf("%d",_dp(n));
	return 0;
}