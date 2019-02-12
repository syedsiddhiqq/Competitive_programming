/*
* @Author: SyedAli
* @Date:   2019-01-26 09:23:39
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 09:46:31
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
	int n,k,sum=0,temp;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=1;i<n;i++){
		temp = k-arr[i-1];
		if(arr[i]<temp){
			sum+= temp - arr[i];
			arr[i]= temp;
		}
	}
	printf("%d\n",sum);
	for(int i=0;i<n;i++)
	 	printf("%d ",arr[i]);
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}