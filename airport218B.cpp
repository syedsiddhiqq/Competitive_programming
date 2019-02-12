/*
* @Author: SyedAli
* @Date:   2019-01-15 14:30:20
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 15:57:14
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
using namespace std;

int main(){
	multiset<int > min,max;
	multiset<int >::iterator itr,itr2;
	int n,m,temp,minsum=0,maxsum=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		scanf("%d",&temp);
		min.insert(temp);
	}
	max = min;
	for(int i=0;i<n;i++){
		temp = *(itr = min.begin());
		minsum+=temp;
		min.erase(min.begin());
		if(temp-1>0) min.insert(temp-1);
		itr = max.end();itr--;
		temp = *itr;
		maxsum += temp;
		max.erase(itr);
		max.insert(temp-1);
	}
	printf("%d %d",maxsum,minsum);
	return 0;
}