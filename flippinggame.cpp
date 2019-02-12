/*
* @Author: SyedAli
* @Date:   2019-01-04 16:13:43
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 18:51:38
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,countofones=0,j,temp1,temp,x,max=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i] == 1)	countofones++;
	}
	// temp = n;
	#pragma omp parallel for num_threads(16) schedule(dynamic,1) 
	for(int i=0;i<n;i++){
		temp = n;
		if(arr[i]== 0){
			for(int j=i;j<temp;temp--){
				temp1 = countofones;
				for(int k=j;k<temp;k++){
					if(k>n) break;
					x = 1-arr[k];
					if(x==1)
						++temp1;
					else
						--temp1;
				}
				if(max<temp1)
					max = temp1;
				// printf("%d->%d---%d\n",j,temp,max);
			}
		}
	}
	if(max == 0) printf("%d",countofones-1);
	else printf("%d",max);
	return 0;
}