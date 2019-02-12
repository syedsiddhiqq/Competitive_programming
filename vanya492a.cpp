/*
* @Author: SyedAli
* @Date:   2019-01-03 16:40:39
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-03 16:45:15
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,temp,sum=0,i=1;
	scanf("%d",&n);
	while(1){
		temp = i+(i*(i-1))/2;
		sum+=temp;
		if(sum>n){
			printf("%d",i-1);
			break;
		}
		i++;
	}
	return 0;
}
