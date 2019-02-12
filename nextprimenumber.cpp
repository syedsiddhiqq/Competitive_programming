/*
* @Author: SyedAli
* @Date:   2019-01-14 08:12:20
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 08:26:58
*/
#include<bits/stdc++.h>
using namespace std;
bool prime[100];
void sieve(){
	memset(prime,true,sizeof(prime));
	for(int i=2;i*i<=100;i++){
		if(prime[i] == true){
			for(int j=i*i;j<=100;j+=i){
				prime[j] = false;
			}
		}
	}
}
int main(){
	sieve();
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n+1;;i++){
		if(prime[i] == true && i == m){
			printf("YES");
			return 0;
		}
		else if(prime[i] == true && i!=m){
			printf("NO");
			return 0;
		}
	}
	return 0;
}