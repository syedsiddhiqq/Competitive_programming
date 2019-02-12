/*
* @Author: SyedAli
* @Date:   2019-01-27 14:05:57
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-27 14:38:50
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int sumof(long long int n){
	int sum=0,rem;
	while(n){
		rem = n%10;
		sum+=rem;
		n = n/10;
	}
	if(sum == 10) return 1;
	else return 0;
}
int main(){
	//int start_s=clock();
	long long int n,count=1,temp;
	scanf("%I64d",&n);
	while(1){
		temp = 9*(count+1)+1;
		if(sumof(temp)){
			n--;
			if(n == 0){
				printf("%I64d",temp);
				return 0;
			}
		}
		count++;
	}
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}