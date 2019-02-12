/*
* @Author: SyedAli
* @Date:   2019-01-03 20:03:54
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-03 20:12:05
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,i=2,teams=0;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	sort(arr,arr+n);
	while(i<n){
		if(arr[i]+k<=5){
			 teams++;
			 i+=3;
		}else break;
	}
	printf("%d",teams);
	return 0;
}