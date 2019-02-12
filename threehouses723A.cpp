/*
* @Author: SyedAli
* @Date:   2019-01-01 17:00:47
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-01 17:17:08
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[3],size;
	scanf("%d%d%d",&arr[0],&arr[1],&arr[2]);
	size  = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+size);
	printf("%d",arr[2]-arr[0]);
	return 0;
}