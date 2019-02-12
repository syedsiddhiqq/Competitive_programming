/*
* @Author: SyedAli
* @Date:   2019-01-03 16:15:05
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-03 16:19:14
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum1=0,sum2=0,sum3=0;
	scanf("%d",&n);
	int arr1[n],arr2[n-1],arr3[n-2];
	for(int i=0;i<n;i++)	scanf("%d",&arr1[i]),sum1+=arr1[i];
	for(int i=0;i<n-1;i++)	scanf("%d",&arr2[i]),sum2+=arr2[i];	
	for(int i=0;i<n-2;i++)	scanf("%d",&arr3[i]),sum3+=arr3[i];
	printf("%d\n%d",(sum1-sum2),(sum2-sum3));
	return 0;
}