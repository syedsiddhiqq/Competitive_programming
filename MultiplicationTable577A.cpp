/*
* @Author: SyedAli
* @Date:   2019-01-04 19:07:21
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 19:15:34
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,count=0;
	scanf("%d%d",&n,&x);
	for(int i=1;i<=n;i++)
		if(x%i==0 && x/i<=n)count++;
	printf("%d",count);
	return 0;
}