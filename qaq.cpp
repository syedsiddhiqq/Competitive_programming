/*
* @Author: SyedAli
* @Date:   2019-01-26 12:53:16
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 13:00:51
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
	char str[101];
	scanf("%s",str);
	int count=0,len= strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]=='Q')
		for(int j=i+1;j<len;j++){
			if(str[j] == 'A'){
				for(int k=j+1;k<len;k++){
					if(str[k] == 'Q')
						count++;
				}
			}
		}
	}
	printf("%d",count);
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}