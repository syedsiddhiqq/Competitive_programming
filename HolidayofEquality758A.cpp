/*
* @Author: SyedAli
* @Date:   2019-01-04 00:16:02
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 00:20:39
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,_max=0,count=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		_max = max(_max,arr[i]);
	}
	if(n == 1) {
		printf("0");
		return 0;
	}
	for(int i=0;i<n;i++)
		count+=(_max-arr[i]);
	printf("%d",count);
	return 0;
}