/*
* @Author: SyedAli
* @Date:   2019-01-25 21:01:19
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-25 22:09:13
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
int dp[100001];
int sum[100001]={0};
void generate(int size,char str[]){
	for(int i=2;i<size;i++){
		if(str[i-1] == str[i]) dp[i-1] = 1;
		sum[i-1] = dp[i-1]+sum[i-2];
	}
	// for(int i=1;i<size;i++) printf("%d",sum[i]);
}
int main(){
	int start_s=clock(),i=1	;
	char s[100001],ch;
	while((ch=getchar())!='\n') s[i++] = ch;
	int q;
	scanf("%d",&q);
	generate(i,s);
	while(q--){
		int l,r,count=0;
		scanf("%d %d",&l,&r);
		printf("%d\n",sum[r-1] - sum[l-1]);
	}
	int stop_s=clock();
	// cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)<< endl;
	return 0;
}