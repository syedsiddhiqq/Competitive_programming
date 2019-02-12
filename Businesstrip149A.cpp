/*
* @Author: SyedAli
* @Date:   2019-01-15 08:56:26
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 09:21:42
*/
 
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int k,sum=0,count=0;
	scanf("%d",&k);
	if(k == 0) {
		printf("0");
		return 0;
	}
	int arr[12];
	F(i,0,12) scanf("%d",&arr[i]);
	sort(arr,arr+12);
	for(int i=11;i>=0;i--,count++){
		sum+=arr[i];
		// p(sum)
		if(sum>=k){
			printf("%d",++count);
			return 0;
		}
	}
	printf("-1");
	// FR(i,12,0) p(arr[i]);
	return 0;
}