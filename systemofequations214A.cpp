/*
* @Author: SyedAli
* @Date:   2019-01-15 08:07:09
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 08:50:46
*/


#include<bits/stdc++.h>
#define p(i) printf("%d",(i))
#define pp(a,b) printf("%d %d",(a),(b))
using namespace std;
int main(){
	int n,m,count=0,temp,a,b;
	scanf("%d%d",&n,&m);
	for(int i=0;i<=sqrt(n);i++){
		a = i*i;b = n-a;
		// pp(a,b);
		temp = b*b + i;
		if(temp == m) count++;
	}
	printf("%d",count);
	return 0;
}