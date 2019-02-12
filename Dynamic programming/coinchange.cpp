/*
* @Author: SyedAli
* @Date:   2019-01-21 18:22:24
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-21 18:59:10
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int dp(int coins[],int sizeOfCoinArray,int amount){
	int table[amount];
	table[0] = 1;
	for(int i=1;i<=amount;i++) table[i] = 0;
	for(int i=0;i<sizeOfCoinArray;i++){
		for(int j=1;j<=amount;j++){
			if(j>=coins[i]){
				table[j]+=table[j-coins[i]];
			}
		}
	}
	return table[amount];
}
int main(){
	int amount,sizeOfCoinArray;
	scanf("%d %d",&amount,&sizeOfCoinArray);
	int coins[sizeOfCoinArray];
	for(int i=0;i<sizeOfCoinArray;i++) scanf("%d",&coins[i]);
	printf("%d",dp(coins,sizeOfCoinArray,amount));
	return 0;
}