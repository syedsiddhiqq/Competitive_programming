/*
* @Author: SyedAli
* @Date:   2019-01-03 16:28:04
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-03 16:36:39
*/

#include<bits/stdc++.h>
using namespace std;
#define limit 100
int cubes[limit+1];

void generateCubes(){
	for(int i=1;i<=limit;i++){
		cubes[i] = i + (i*(i-1))/2;
		// printf("%d\n",cubes[i]);
	}
}

int main(){
	generateCubes();
	int n,squareofn,sum=0;
	scanf("%d",&n);
	squareofn = sqrt(n);
	for(int i=squareofn;i>0;i--){
		sum=0;
		for(int j=i;j>0;j--){
			sum+=cubes[j];
		}
		if(sum<=n)
			{printf("%d",i);break;}
	}
	return 0;
}