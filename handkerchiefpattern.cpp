/*
* @Author: SyedAli
* @Date:   2019-01-15 11:52:34
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 12:32:34
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
	int n,temp,k=0;
	scanf("%d",&n);
	for(int i=0,temp=n*2;i<n+1;i++,temp-=2){
		for(int j=0;j<temp;j++) printf(" ");
		if(i==0)printf("0");
		else{
			for(int k=0;k<=i;k++)printf("%d ",k);
			for(int k=i-1;k>=0;k--){
				if(k==i-1) printf("%d",k);
				else printf(" %d",k);
			}
		}
	printf("\n");
	}
	for(int i=n-1,temp=2;i>=0;i--,temp+=2){
		for(int j=0;j<temp;j++) printf(" ");
		if(i==0)printf("0");
		else{
			for(int k=0;k<=i;k++)printf("%d ",k);
			for(int k=i-1;k>=0;k--){
				if(k==i-1) printf("%d",k);
				else printf(" %d",k);
			}
		}
	printf("\n");
	}
	return 0;
}