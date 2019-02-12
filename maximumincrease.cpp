/*
* @Author: SyedAli
* @Date:   2019-01-26 12:27:49
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 12:32:21
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
	int n,count=1,max=1;
	scanf("%d",&n);
	int arr[n];
	scanf("%d",&arr[0]);
	for(int i=1;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>arr[i-1]){
			count++;
			if(max<count) max = count;
		}else{
			count=1;
		}
	}
	printf("%d",max);
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}