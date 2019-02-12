/*
* @Author: SyedAli
* @Date:   2019-01-04 20:33:19
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 22:03:04
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,temp=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]),sum+=arr[i];
	if(sum == 360) {
		printf("YES");
		return 0;
	}
	sort(arr,arr+n);
	temp = arr[n-1];
	for(int i=n-2;i>=0;i--){
		if(temp<=0){
			temp = temp+arr[i];
		}
		else{
			temp = temp-arr[i];
		}
	}
	if(temp == 0)printf("YES");
	else printf("NO");
}