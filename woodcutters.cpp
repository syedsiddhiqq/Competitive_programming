/*
* @Author: SyedAli
* @Date:   2019-01-29 11:31:33
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-29 20:24:50
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
int main(){
	int n,ans = 2;
	scanf("%d",&n);
	int arr[n],h[n];
	for(int i=1;i<=n;i++){
		scanf("%d %d",&arr[i],&h[i]);
	}
	if(n==1){
		printf("1");
		return 0;
	}
	for(int i=2;i<=n-1;i++){
		if(abs(arr[i] - arr[i-1])>h[i])
			ans++;
		else if(abs(arr[i] - arr[i+1])>h[i])
			ans++,arr[i]+=h[i];
	}
	printf("%d",ans);
	return 0;
}
