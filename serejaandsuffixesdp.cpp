/*
* @Author: SyedAli
* @Date:   2019-01-26 00:47:22
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 01:07:49
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	//int start_s=clock();
	int n,m,count=0,temp;
	scanf("%d %d",&n,&m);
	int arr[n],dp[100001],freq[100001]={0};
	for(int i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=n;i>0;i--){
		if(freq[arr[i]] == 0){
			dp[i] = ++count;
			freq[arr[i]]++;
		}else{
			dp[i] = count;
		}
	}
	for(int i=0;i<m;i++){
		scanf("%d",&temp);
		printf("%d\n",dp[temp]);
	}
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}