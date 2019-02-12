/*
* @Author: SyedAli
* @Date:   2019-01-25 16:55:10
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-25 17:07:56
*/

// Recursive knapsack problem
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;


int knapsack(int weight,int n,int w[],int v[]){
	if(n == 0 || weight == 0) return 0; // base case

	if(w[n-1]>weight) 
		return knapsack(weight,n-1,w,v); //  skip that item
	return max(knapsack(weight,n-1,w,v),knapsack(weight-w[n],n-1,w,v)+v[n-1]);
}
int main(){
	int start_s=clock();
	int num_of_items,max_weight=50;
	scanf("%d",&num_of_items);
	int weightarr[num_of_items];
	int valuearr[num_of_items];

	for(int i=0;i<num_of_items;i++){
		scanf("%d %d",&weightarr[i],&valuearr[i]);
	}

	printf("%d\n",knapsack(max_weight,num_of_items,weightarr,valuearr));
	int stop_s=clock();
	cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}