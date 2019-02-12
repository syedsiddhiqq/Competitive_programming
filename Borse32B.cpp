/*
* @Author: SyedAli
* @Date:   2019-01-14 07:03:42
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 07:08:40
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[201];
	scanf("%s",str);
	for(int i=0;str[i]!='\0';i++){
		if(str[i] == '.') printf("0");
		else if(str[i] == '-' && str[i+1] == '.') printf("1"),i++;
		else if(str[i] == '-' && str[i+1] == '-') printf("2"),i++;
	}
}