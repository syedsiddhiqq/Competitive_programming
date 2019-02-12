/*
* @Author: SyedAli
* @Date:   2019-01-26 22:02:47
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 22:07:17
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	//int start_s=clock();
	int q;
	scanf("%d",&q);
	while(q--){
		long long int k,x;
		scanf("%I64d %I64d",&k,&x);
		printf("%I64d\n",((k-1)*9)+x);
	}
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}