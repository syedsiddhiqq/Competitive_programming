/*
* @Author: SyedAli
* @Date:   2019-01-22 20:34:05
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-22 21:57:43
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
	int count=0,k;
	int temp;
	// printf("%d",strlen(str));
	for(int i=0;i<str.size();i++){
		for(int j=0;str.size()>2;j++){
			k = j+1;
			temp = j;
			while(str[temp] == str[k]){
				count++;
				str.erase(str.begin() + k);
				// cout<<str<<endl;
				str.erase(str.begin() + temp);  
				cout<<str<<endl;
			}

		}
	}
	if(count%2 == 0) printf("No");
	else printf("Yes");
	p(count);
	return 0;
}