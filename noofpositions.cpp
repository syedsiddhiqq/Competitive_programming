/*
* @Author: SyedAli
* @Date:   2019-01-15 10:10:43
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 10:35:28
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
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	p(min(b+1,n-a));
	return 0;
}