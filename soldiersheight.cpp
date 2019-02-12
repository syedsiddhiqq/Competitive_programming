/*
* @Author: SyedAli
* @Date:   2019-01-14 16:27:29
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 16:51:23
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,_min=1001,x=0,y=0,temp;
	scanf("%d",&n);
	int arr[n];
	for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
	for(int i=1;i<n;i++){
		if(i<n) temp = abs(arr[i]-arr[i+1]);
		if(_min>temp){
				_min = temp;
				x = i;
				y = i+1;
			}
	}
	temp = abs(arr[1]-arr[n]);
	if(_min>temp){
				_min = temp;
				x = n;
				y = 1;
			}
	printf("%d %d",x,y);
	return 0;
}