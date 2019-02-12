/*
* @Author: SyedAli
* @Date:   2019-01-29 20:28:22
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-29 21:01:31
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	string str;
	cin>>str;
	int dig  = 0;
	for(int i=0;str[i]!='\0';i++){
			dig = max(dig,str[i]-'0');
	}
	printf("%d\n",dig);
	for(int i=0;i<dig;i++){
		string temp;
		for(int j=0;str[j]!='\0';j++){
			if(str[j]>='1'){
				temp+='1';
				str[j]--;
			}
			else if(temp.size())
				temp+='0';
		}
		cout<<temp;
		printf(" ");
	}
	return 0;
}