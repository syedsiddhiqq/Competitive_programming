/*
* @Author: SyedAli
* @Date:   2019-01-14 09:06:04
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 09:13:32
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,l,r,cl0=0,cl1=0,cr0=0,cr1=0;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&l,&r);
		l==0?cl0++:cl1++;
		r==0?cr0++:cr1++;
	}
	printf("%d",min(cr0,cr1)+min(cl0,cl1));
	return 0;
}