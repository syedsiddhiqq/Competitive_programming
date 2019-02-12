/*
* @Author: SyedAli
* @Date:   2019-01-02 16:47:47
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-06 23:46:06
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,rem,mins=0,i,count=0;
	scanf("%d %d",&n,&k);
	rem = 240 - k;
	for(i=1;i<=n;i++){
		mins = mins+ i*5;
		if(mins>rem)
			break;
		count++;
				
	}
	printf("%d",count);
	return 0;
}	