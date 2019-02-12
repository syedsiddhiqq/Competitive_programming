/*
* @Author: SyedAli
* @Date:   2019-01-26 20:34:31
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 20:45:04
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
	int n;
	char str[1000001];
	scanf("%d",&n);
	while(n--){
		int len,count=0;
		scanf("%d\n%s",&len,str);
		for(int i=0;i<len;i++){
			if(str[i] == '1') continue;
			if(str[i-1]!='1' && str[i+1]!='1'){
				count++;
				str[i] = '1';
			}
		}
		printf("%d\n",count);
	}
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}