/*
* @Author: SyedAli
* @Date:   2019-01-14 07:40:48
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 08:07:28
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int lights[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			lights[i][j] = 1;
	int arr[3][3];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			scanf("%d",&arr[i][j]);
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++){
			if(arr[i][j]%2 != 0){
				lights[i][j] = 1 - lights[i][j];
				if(j+1<3)
					lights[i][j+1] = 1 - lights[i][j+1];
				if(j-1>=0)
					lights[i][j-1] = 1 - lights[i][j-1];
				if(i+1<3)
					lights[i+1][j] = 1 - lights[i+1][j];
				if(i-1>=0)
					lights[i-1][j] = 1 - lights[i-1][j];
			}
		}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d",lights[i][j]);
		}
		printf("\n");
	}
	return 0;
}