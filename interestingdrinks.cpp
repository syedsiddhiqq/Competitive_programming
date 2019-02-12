/*
* @Author: SyedAli
* @Date:   2019-01-25 22:44:51
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 00:32:06
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
int dp[100002]={0};
int main(){
	//int start_s=clock();
	int n,count=0,m = 0;
	scanf("%d",&n);
	int arr[n],days,temp;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		m = max(m,arr[i]);
		dp[arr[i]]++;
	}
	for(int i=1;i<=m;i++)
		dp[i] += dp[i-1];
	scanf("%d",&days);
	for(int i=0;i<days;i++){
		scanf("%d",&temp);
		temp = min(temp,m);
		printf("%d\n",dp[temp]);
	} 
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}