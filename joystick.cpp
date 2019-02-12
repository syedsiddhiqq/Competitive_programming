/*
* @Author: SyedAli
* @Date:   2019-01-26 12:10:03
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 12:19:29
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
	int a,b,count=0;
	scanf("%d %d",&a,&b);
	if(a==1 && b==1){
		printf("0");
		return 0;
	}
	while(a>0 && b>0){
		if(a<b) a++,b-=2;
		else b++,a-=2;
		count++;
	}
	printf("%d",count);
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}