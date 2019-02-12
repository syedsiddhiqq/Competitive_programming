/*
* @Author: SyedAli
* @Date:   2019-01-25 10:26:48
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-25 10:52:44
*/
// https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=436

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
int fib[5001];
void generatefib(){
	fib[0] = 0;
	fib[1] = 1;
	for(int i=2;i<=5001;i++){
		fib[i] = fib[i-1]+fib[i-2];
	}
}
int main(){
	int n;
	int start_s=clock();
	generatefib();
	int stop_s=clock();
	while(scanf("%d",&n)){
		printf("The Fibonacci number for %d is %d\n",n,fib[n]);
		
		cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	}
	return 0;
}