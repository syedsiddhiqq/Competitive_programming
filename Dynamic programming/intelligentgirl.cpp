/*
* @Author: SyedAli
* @Date:   2019-01-13 15:50:24
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-13 15:58:52
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[10001];
	scanf("%s",s);
	int count=0,prev=0;
	int arr[strlen(s)];
	for(int i=strlen(s)-1;i>=0;i--){
		if((s[i]-'0')%2==0){
			prev = prev+1;
		}
		arr[i] = prev;
		
	}
	for(int i=0;i<strlen(s);i++) printf("%d ",arr[i]);
	return 0;
}