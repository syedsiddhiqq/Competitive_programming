/*
* @Author: SyedAli
* @Date:   2019-01-25 15:51:33
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-25 16:34:29
*/
// C++ program to find maximum achievable value 
// with a knapsack of weight W and multiple 
// instances allowed. 
#include<bits/stdc++.h> 
using namespace std; 
  
// Returns the maximum value with knapsack of 
// W capacity 
int unboundedKnapsack(int W, int n, int val[], int wt[]) 
{ 
    // dp[i] is going to store maximum value 
    // with knapsack capacity i. 
    int dp[W+1]; 
    memset(dp, 0, sizeof dp); 
  
    int ans = 0; 
  
    // Fill dp[] using above recursive formula 
    for (int i=0; i<=W; i++) 
      for (int j=0; j<n; j++) 
         if (wt[j] <= i) 
            dp[i] = max(dp[i], dp[i-wt[j]]+val[j]); 
  
    return dp[W]; 
} 
  
// Driver program 
int main() 
{ 
	int n,k;
	scanf("%d %d",&n,&k);
	int val[k],wt[k]; 
	for(int i=0;i<k;i++) scanf("%d",&val[i]);
   	for(int i=1;i<=k;i++) wt[i] = i;
    cout << unboundedKnapsack(k, k, val, wt); 
  
    return 0; 
} 