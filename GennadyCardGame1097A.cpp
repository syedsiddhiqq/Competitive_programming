/*
* @Author: SyedAli
* @Date:   2019-01-04 20:19:05
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-04 20:24:27
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	char a,b,ch;
	a = getchar();
	b = getchar();
	getchar();
	while((ch = getchar())!='\n'){
		if(ch == a || ch == b)	{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}