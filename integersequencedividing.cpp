/*
* @Author: SyedAli
* @Date:   2019-01-10 17:17:39
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-10 17:20:05
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,sum;
	scanf("%I64d",&n);
	sum = n*(n+1)/2;
	if(sum%2 == 0) printf("0");
	else printf("1");
	return 0;
}