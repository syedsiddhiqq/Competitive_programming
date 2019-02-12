/*
* @Author: SyedAli
* @Date:   2019-01-05 16:12:07
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-05 16:15:21
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,press=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
		press+= i*(n-i);
	printf("%d",2*n+press-1);
	return 0;
}