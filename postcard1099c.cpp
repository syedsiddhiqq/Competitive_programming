/*
* @Author: SyedAli
* @Date:   2019-01-05 23:23:43
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-06 00:21:03
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch,string[201];
	int k,n=0,spl=0,con=0,flag,temp=0;
	while((ch = getchar())!='\n'){
		string[n++] = ch;
		if(ch == '*' || ch == '?') spl++;
		else con++;
	}
	string[n] = '\0';
	scanf("%d",&k);
	// printf("%d",k);
	// printf("%d",con);
	if(con-spl>k){printf("Imposible");
		return 0;
	}
	if(con == k) flag = -1;
	else if(con<k) flag = 1;
	else flag = 0;
	for(int i=0;i<n;i++){
		if(flag == -1){
			if(string[i] != '*' && string[i] != '?') printf("%c",string[i]);
		}
		else if(flag == 1){
			if(string[i] == '*'){
				while(con<k){
					printf("%c",string[i-1]);
					con++;
				}
			}
			else if(string[i] != '?') printf("%c",string[i]);
		}else{
			int n1 = con-k;
			if(string[i+1] == '?' && temp<n1){
				while(con>k){
					con--;
				}
				temp++;
			}
			else if(string[i] != '*' && string[i] !='?'){
				printf("%c",string[i]);
			}
		}
	}


	return 0;
}