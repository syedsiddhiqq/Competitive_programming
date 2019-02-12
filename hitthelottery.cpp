/*
* @Author: SyedAli
* @Date:   2019-01-27 13:57:15
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-27 14:02:42
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
	int n,bills=0;
	scanf("%d",&n);
	if(n>=100){
			bills+=n/100;
			n = n%100;
		}
		if(n>=20){
			bills+=n/20;
			n = n%20;
		}
		if(n>=10){
			bills+=n/10;
			n = n%10;
		}
		if(n>=5){
			bills+=n/5;
			n = n%5;
		}
		bills+=n;
		printf("%d",bills);
	
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}