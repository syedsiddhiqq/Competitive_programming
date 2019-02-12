/*
* @Author: SyedAli
* @Date:   2019-01-14 09:34:23
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 09:40:05
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,l,c,d,p,nl,np;
	scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);
	k = k*l/nl;
	c = c*d;
	p = p/np;
	cout<<min(k,min(c,p))/n;
	return 0;
}