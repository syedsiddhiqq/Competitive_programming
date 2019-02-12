/*
* @Author: SyedAli
* @Date:   2019-01-04 18:37:35
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 18:41:58
*/

#include<bits/stdc++.h>

int main(){
	#pragma omp parallel for num_threads(4) schedule(dynamic,1) 
	for(int i=0;i<100000;i++)
		printf("%d",i*i);
	
	return 0;
}