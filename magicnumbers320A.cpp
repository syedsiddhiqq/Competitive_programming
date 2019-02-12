/*
* @Author: SyedAli
* @Date:   2019-01-15 07:37:32
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 07:56:32
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[20];
	scanf("%s",str);
	for(int i=strlen(str)-1;i>=0; i-- ){
		if(str[i] != '4' && str[i] !='1'){
			printf("NO");
			return 0;
		}
		if(str[i] == '4' && str[i-1] == '4' && str[i-2] !='1' && i>=0){
			printf("NO");
			return 0;
		}
		if(str[i] == '4' && str[i-1] == '4' && str[i-2] =='1' && i>=0) continue;
		 
		if(str[i] == '4' && str[i-1] !='1'){
			printf("NO");
			return 0;
		}
		
	}
	printf("YES");
	return 0;
}