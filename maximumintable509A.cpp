/*
* @Author: SyedAli
* @Date:   2019-01-04 16:47:15
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 16:59:17
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int arr[n][n];
	memset(arr, 1, sizeof(arr[0][0]) * n * n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			arr[i][j] = 1;
	for(int i=1;i<n;i++)
		for(int j=1;j<n;j++)
			arr[i][j] = arr[i-1][j]+arr[i][j-1];
	printf("%d",arr[n-1][n-1]);
	return 0;
}