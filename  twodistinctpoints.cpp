/*
* @Author: SyedAli
* @Date:   2019-01-23 20:13:18
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-02-04 06:01:09
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int q;
	scanf("%d",&q);
	set<int > dis;
	while(q--){
		int l1,r1,l2,r2;
		scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
		if(l1!= l2 && l1 != r2) printf("%d ",l1);
		else printf("%d ",r1);
		if(r2!=l1 && r2!=r1) printf("%d\n",r2);
		else printf("%d\n",l2);
	}
	return 0;
}