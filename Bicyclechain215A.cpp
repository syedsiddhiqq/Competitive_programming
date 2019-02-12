/*
* @Author: SyedAli
* @Date:   2019-01-15 06:56:20
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 07:06:41
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,temp,max=0,count=1;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	int m;
	scanf("%d",&m);
	int arr2[m];
	for(int i=0;i<m;i++) scanf("%d",&arr2[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr2[j]%arr[i] == 0){
				temp = arr2[j]/arr[i];
				if(temp == max) count++;
				if(max<temp) max = temp,count=1;
			}
		}
	}
	printf("%d",count);
	return 0;
}