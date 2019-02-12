/*
* @Author: SyedAli
* @Date:   2019-01-31 21:36:21
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-31 23:20:55
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		int r1,c1,r2,c2,flag= 0;
		scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
		if(c1 == c2){
			if((r2-r1)%2 == 1) printf("Black\n");
			else printf("White\n");
			return 0;
		}else if((c1+1) == c2 || (c1-1) ==c2){
			if((r2-r1)%2 == 1) printf("White\n");
			else printf("Black\n");
			return 0;
		}
		else {
			if((8-r1)<=(r2-1)) printf("White\n");
			else printf("Black\n");
		}
	}
	return 0;
}