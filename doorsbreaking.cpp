/*
* @Author: SyedAli
* @Date:   2019-01-11 19:16:16
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-11 19:20:52
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y,temp,count=0;
	scanf("%d %d %d",&n,&x,&y);
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp<=x) count++;
	}
	if(x>y) printf("%d",n);
	else printf("%d",(count%2==0?count/2:count/2+1));
	return 0;
}