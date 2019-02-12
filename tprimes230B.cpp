/*
* @Author: SyedAli
* @Date:   2019-01-02 17:24:08
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-02 18:02:18
*/

#include<bits/stdc++.h>
using namespace std;

int isPrime(long long int n){
	if(n<2)
		return 0;
	else if(n==2)
		return 1;
	else{
		for(int i=2;i<=sqrt(n);i++){
			if(n%i == 0)
				return 0;
		}
	}
	return 1;
}
int main(){
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
		if(isPrime(squareoftemp))
			printf("YES\n");
		else
			printf("NO\n");

	
	}
	return 0;
}