/*
* @Author: SyedAli
* @Date:   2019-01-26 21:11:05
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 21:32:06
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
		int len,a,b;
		scanf("%d",&len);
		char str[len];
		scanf("%s",str);
		if(len == 1){
			printf("NO\n");
			continue;
		}
		if(len == 2){
			if(str[0]< str[1])printf("YES\n2\n%c %c\n",str[0],str[1]);
			else printf("NO\n");
			
		}else {printf("YES\n2\n%c ",str[0]);

		for(int i=1;i<len;i++) printf("%c",str[i]);
			printf("\n");
	}

	}
	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}