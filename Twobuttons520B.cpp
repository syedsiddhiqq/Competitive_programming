/*
* @Author: SyedAli
* @Date:   2019-01-08 12:28:51
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-08 12:56:25
*/


#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 1e4;

int n, m;
bool mark[MAX_N + 5];
void bfs(int n,int m){
	queue <pair<int,int> > q;
	visited[n] =  true;
	q.push(make_pair(n,0));
	while(!q.empty()){
		pair<int,int> p = q.front();
		int value = p.first;
		int depth = p.second;

		q.pop();
		if(value == m) {
			printf("%d",depth);
			return;
		}
		if(n > 1 && !visited[n-1]){
			q.push(make_pair(n-1,depth+1));
			visited[n-1 ] =true;
		}
		if(n<<1 <= 100000 && !visited[n<<1]){
			q.push(make_pair(n<<1,depth+1));
			visited[n<<1] = true;
		}
	}
}
int main(){
	scanf("%d%d",&n,&m);
	bfs(n,m);
	return 0;
}