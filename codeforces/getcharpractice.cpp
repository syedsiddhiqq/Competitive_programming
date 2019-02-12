/*
* @Author: SyedAli
* @Date:   2019-01-01 18:51:15
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-01 19:21:30
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	int count=0;
	char num[100];
	while((ch = getchar())!='\n'){
		num[count++] = ch;
	}
	num[count] = '\0';
	int len = strlen(num);
	if(num[0] == '-'){
		if(num[len-1]>num[len-2]){
			num[len-1] = '\0';
			
		}else{
			num[len-2] = num[len-1];
			num[len-1] = '\0';
		}

		if(strlen(num) == 2 && num[1] == '0')
			num[0] = '0',num[1] = '\0';
	}
	printf("%s",num);	
	return 0;
}