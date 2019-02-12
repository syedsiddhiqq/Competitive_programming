/*
* @Author: SyedAli
* @Date:   2019-01-26 20:59:29
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 21:02:54
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
	int t;
	scanf("%d",&t);
	while(t--){
		int row,k,a,b;
		int chess[row][row]={0};
		for(int i=0;i<k;i++){
			scanf("%d %d",&a,&b);
			for(int j=0;j<row;j++)
				arr[a-1][j] = 1,arr[j][b-1] =1;
		}
	}
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}