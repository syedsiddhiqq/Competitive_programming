/*
* @Author: SyedAli
* @Date:   2019-01-10 16:11:08
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-10 16:14:07
*/
#include<bits/stdC++.h>
using namespace std;
int main(){
	int k1,k2,k3,k4,sum=0,temp;
	scanf("%d%d%d%d",&k1,&k2,&k3,&k4);
	temp = min(k1,min(k3,k4));
	sum+=temp*256;
	k1 -= temp;
	sum+=min(k1,k2)*32;
	printf("%d",sum);
	return 0;
}