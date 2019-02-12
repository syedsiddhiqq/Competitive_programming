/*
* @Author: SyedAli
* @Date:   2019-01-15 15:26:13
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 15:39:39
*/

#include<bits/stdc++.h>
#define p(i) printf("%d\n",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
using namespace std;

int main(){
	multiset<int > m;
	multiset<int >:: iterator itr;
	for(int i=0;i<10;i++){
		int temp;
		scanf("%d",&temp);
		m.insert(temp);
	}
	for(itr=m.begin();itr!=m.end();itr++) {
		p(itr);
	}
	return 0;
}