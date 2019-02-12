/*
* @Author: SyedAli
* @Date:   2019-01-04 17:51:32
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 17:55:23
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p1,p2,miskha=0,chris=0;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&p1,&p2);
		if(p1>p2)	miskha++;
		else if(p2>p1) chris++;
	}
	if(miskha>chris) printf("Mishka");
	else if(chris>miskha) printf("Chris");
	else printf("Friendship is magic!^^");
	return 0;
}