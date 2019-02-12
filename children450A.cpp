/*
* @Author: SyedAli
* @Date:   2019-01-14 14:07:26
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 14:27:57
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,temp,val,index;
	scanf("%d %d",&n,&m);
	queue<pair<int, int > > q;
	for(int i=1;i<=n;i++){
		scanf("%d",&temp);
		q.push(make_pair(temp,i));
	}

	while(!q.empty()){
		pair<int,int >p = q.front();
		val = p.first;
		index = p.second;
		if(val<=m) q.pop();
		else{
			q.push(make_pair(val-m,index));
			q.pop();
		}
	}
	printf("%d",index);
	return 0;
}