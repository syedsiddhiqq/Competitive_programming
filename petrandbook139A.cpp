/*
* @Author: SyedAli
* @Date:   2019-01-14 15:57:33
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 16:11:12
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i=1;
	scanf("%d",&n);
	int arr[7];
	for(int i=1;i<=7;i++) scanf("%d",&arr[i]);
	while(i){
		n = n - arr[i];
		if(n<=0){
			printf("%d",i);
			return 0;
		}
		++i;
		i = i>7?1:i;
	}
	return 0;
}