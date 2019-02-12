/*
* @Author: SyedAli
* @Date:   2019-01-03 22:22:53
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-03 22:28:02
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int events,buffer=0,crimes=0,temp;
	scanf("%d",&events);
	for(int i=0;i<events;i++){
		scanf("%d",&temp);
		if(temp == -1 && buffer == 0) crimes++;
		else if(temp == -1 && buffer != 0) buffer--;
		else buffer+=temp;
	}
	printf("%d",crimes);
	return 0;
}