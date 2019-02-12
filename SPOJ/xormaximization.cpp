/*
* @Author: SyedAli
* @Date:   2019-01-25 15:26:46
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-25 15:37:14
*/
// https://www.spoj.com/problems/XMAX/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int start_s=clock();
	int n,temp,maxvalue=0,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&temp);
		maxvalue+=temp;
	}
	int stop_s=clock();
	printf("%d",maxvalue);
	// cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}