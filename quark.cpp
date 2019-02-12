/*
* @Author: SyedAli
* @Date:   2019-01-31 22:34:05
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-31 23:34:10
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int n,temp,points=0,c=0;
		scanf("%d",&n);
		deque <int > qu;
		for(int i=0;i<n;i++){
			scanf("%d",&temp);
			qu.push_back(temp);
		}
		while(!qu.empty()){
			temp=qu.back();
			qu.pop_back();
			
			if(c%2 == 0) points+=temp;
			c++;
		}
		printf("%d\n",points);
	
	return 0;
}