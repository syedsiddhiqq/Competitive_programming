/*
* @Author: SyedAli
* @Date:   2019-01-05 22:15:29
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-05 22:35:05
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int w,h,u1,d1,u2,d2,sum=0;
	scanf("%d %d",&w,&h);
	// sum = h * (h+1)/2;
	scanf("%d %d",&u1,&d1);
	scanf("%d %d",&u2,&d2);
	
	while(h){
		w = w+h;
		if(h == d1){
			w = w-u1;
		}
		if(h == d2){
			w = w-u2;
		}
		h--;
		if(w < 0) w = 0;
	}
	printf("%d",w);
}