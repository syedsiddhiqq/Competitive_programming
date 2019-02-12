/*
* @Author: SyedAli
* @Date:   2019-01-13 15:10:09
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-13 15:11:17
*/

#include<bit/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int r,g;
		scanf("%d%d",&r,&g);
		printf("%d",r/(r+g));
	}
	return 0;
}