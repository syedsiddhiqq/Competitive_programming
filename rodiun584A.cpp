/*
* @Author: SyedAli
* @Date:   2019-01-03 23:19:14
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 00:01:10
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t,count=1,temp;
	scanf("%d%d",&n,&t);
	temp = t;
	while(temp = temp/10) count++;
	if(count>n){
		printf("-1");
		return 0;
	}
	printf("%d",t);
	int limit = n-count;
	for(int i=0;i<limit;i++)	printf("0");
	return 0;
}