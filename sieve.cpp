/*
* @Author: SyedAli
* @Date:   2019-01-02 18:45:32
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-02 19:18:45
*/

#include<bits/stdc++.h>
using namespace std;

const long limit = 1000000;
bool primes[limit];


void sieveOf(){
	primes[0] = primes[1] = 0;
	for(long k = 2; k <= limit; k++){primes[k] = 1;}
	
	for(long i = 2;i<=sqrt(limit);i++){
		if(primes[i]){
			for(long j=2;j<=limit/i;j++){
				primes[i*j]=0;
			}
		}
	}
}
int main(){
	sieveOf();
	long long int n;
	scanf("%I64d",&n);
	for(long long int itr = 0;itr<n;itr++){
		long long int temp;
		scanf("%I64d",&temp);
		long long int squareoftemp = sqrt(temp);
		if(squareoftemp*squareoftemp != temp || temp == 1){
			printf("NO\n");
			continue;
		}
		if(primes[squareoftemp] == 1)
			printf("YES\n");
		else
			printf("NO\n");

	
	}
	return 0;
}