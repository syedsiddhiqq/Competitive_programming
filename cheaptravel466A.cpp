/*
* @Author: SyedAli
* @Date:   2019-01-01 17:22:53
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-01 18:15:24
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,b,cost,rem,quo,cost2;
	scanf("%d%d%d%d",&n,&m,&a,&b);
	cost = n*a;
	cost2 = n/m*b+min(b,n%m*a);
	printf("%d",(cost<cost2?cost:cost2));
	return 0;	
}