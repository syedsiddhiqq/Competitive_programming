/*
* @Author: SyedAli
* @Date:   2019-01-28 21:04:51
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-28 21:10:32
*/

#include<bits/stdc++.h>
#include<cmath>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	//int start_s=clock();
	int t,j=0;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		long long int temp;
		scanf("%lld",&temp);
		j=0;
		while(1){
			if(pow(2,j)>temp) break;
			// printf("%d",j);
			j++;
		}
		temp = pow(2,j-1);
		printf("%lld",temp);
	}
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}