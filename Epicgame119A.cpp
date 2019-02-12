/*
* @Author: SyedAli
* @Date:   2019-01-03 16:48:00
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-03 18:15:47
*/
#include<bits/stdc++.h>
using namespace std;

int gcdOf(int a,int b){
	int i=0,limit,gcd=0;
	if(a == 0 || b == 0) return 0;
	if(a==b) return a;
	limit = (a>b)?a:b;
	for(i=1;i<=b/2;i++){
		if(a%i == 0 && b%i == 0)
			gcd = i;
	}
	return gcd;
}
int main(){
	int a,b,n,i=1,temp;
	scanf("%d%d%d",&a,&b,&n);
	// cout<<gcdOf(10,20);
	while(i++){
		if(i%2==0)
			temp = __gcd(a,n);
		else
			temp = __gcd(b,n);
		// printf("%d %d\n",n,temp);
		if(n==0 && i%2==0) {printf("1");break;}
		else if(n== 0 && i%2!=0) {printf("0");break;}
		n = n-temp;
		// printf("%d %d\n",n,temp);

	}
	return 0;
}