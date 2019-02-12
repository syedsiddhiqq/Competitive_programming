/*
* @Author: SyedAli
* @Date:   2019-01-27 13:34:45
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-27 13:46:57
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
	int len = strlen(str),temp,temp1,temp2;
	for(int i=0;i<len;i++){
		temp = str[i]-'0';
		if(temp%8==0){
			printf("YES\n");
			printf("%d",temp);
			return 0;
		}
	}

	for(int i=0;i<len;i++){
		temp = str[i] - '0';
		for(int j=i+1;j<len;j++){
			temp1 = str[j] - '0';
			if((temp*10+temp1)%8 == 0){
				printf("YES\n");
				printf("%d",temp*10+temp1);
				return 0;
			}
		}
	}

	for(int i=0;i<len;i++){
		temp = str[i]-'0';
		for(int j=i+1;j<len;j++){
			temp1 = str[j] - '0';
			for(int k=j+1;k<len;k++){
				temp2 = str[k] - '0';
				if((temp*100+temp1*10+temp2)%8 == 0){
					printf("YES\n");
					printf("%d",(temp*100)+(temp1*10)+temp2);
					return 0;
				}
			}
		}
	}

	printf("NO\n");

	//int stop_s=clock();
	//cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
	return 0;
}