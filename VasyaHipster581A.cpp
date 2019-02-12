/*
* @Author: SyedAli
* @Date:   2019-01-03 19:55:22
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-03 19:57:10
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int red,blue;
	scanf("%d %d",&red,&blue);
	printf("%d %d",min(red,blue),(max(red,blue)-min(red,blue))/2);
	return 0;
}