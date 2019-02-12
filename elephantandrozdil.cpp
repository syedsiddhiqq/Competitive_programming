/*
* @Author: SyedAli
* @Date:   2019-01-14 16:58:14
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 19:05:20
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,dist,count=1,min = 1e9+1,index=0,i;
	scanf("%I64d",&n);
	for(i=1;i<=n;i++){
		scanf("%I64d",&dist);
		if(min == dist) count=1;
		if(min>dist){
			min = dist;
			index = i;
			count=0;
		}
	}
	if(count==1) printf("Still Rozdil");
	else printf("%I64d",index);
	return 0;
}