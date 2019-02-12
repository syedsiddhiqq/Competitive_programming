/*
* @Author: SyedAli
* @Date:   2019-01-28 19:08:14
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-28 22:11:32
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int j=0;j<t;j++){
		int len;
		scanf("%d\n",&len);
		char ch;
		while(len--){
			ch = getchar();
		    if(ch == ' ') {printf(" ");continue;}
			if(ch>='A' && ch<='Z') printf("%c",'A'+((ch-'A')+13)%26);
			else if(ch>='a' && ch<='z') printf("%c",'a'+((ch-'a')+13)%26);
			else if(ch>='0' && ch<='9') printf("%c",'0'+((ch-'0')+5)%10);
		}
	}
	return 0;
}