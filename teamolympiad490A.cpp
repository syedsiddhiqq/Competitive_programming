/*
* @Author: SyedAli
* @Date:   2019-01-04 17:10:14
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 17:26:32
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,temp,c1=0,c2=0,c3=0;
	scanf("%d",&n);
	int arr1[n+1],arr2[n+1],arr3[n+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&temp);
		if(temp == 1) arr1[c1++] = i;
		if(temp == 2) arr2[c2++] = i;
		if(temp == 3) arr3[c3++] = i;
	}
	n = min(c1,min(c2,c3));
	printf("%d\n",n);
	for(int i=0;i<n;i++)
		printf("%d %d %d\n",arr1[i],arr2[i],arr3[i]);
	return 0;
}