/*
* @Author: SyedAli
* @Date:   2019-01-11 23:13:13
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-11 23:26:43
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l,r,p;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d",&l,&r,&p);
		printf("%d\n",p<l?p:(r/p+1)*p);
	}
	return 0;
}