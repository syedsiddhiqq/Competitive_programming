/*
* @Author: SyedAli
* @Date:   2019-01-23 21:02:42
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-23 22:23:06
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int n,temp,count=0,j,index=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,arr+n);
	for(int i=n-1;i>=0;i--){
		if(arr[n-1]%arr[i] != 0 || arr[i] == arr[i-1]){
			printf("%d %d",arr[n-1],arr[i]);
			break;
		}
	}
	
	return 0;
}