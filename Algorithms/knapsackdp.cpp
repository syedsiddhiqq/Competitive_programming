/*
* @Author: SyedAli
* @Date:   2019-01-25 17:54:15
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-25 17:59:51
*/

// Knapsack problem using dynamic programming
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int knapSack(int weight,int wt[],int val[],int n){
	int dp[n+1][weight+1];
	for(int i=0;i<=n;i++){
		for(int w=0;w<=weight;w++){
			if(i == 0 || w == 0)
				dp[i][w] = 0;
			else if(wt[i-1]<=weight)
				dp[i][w] = max(val[i-1]+dp[i-1][w-wt[i-1]],dp[i-1][w]);
			else
				dp[i][w] = dp[i-1][w];
		}
	}
	return dp[n][weight];
}

int main() 
{ 
    int val[] = {60, 100, 120}; 
    int wt[] = {10, 20, 30}; 
    int  W = 50; 
    int n = sizeof(val)/sizeof(val[0]); 
    printf("%d", knapSack(W, wt, val, n)); 
    return 0; 
} 