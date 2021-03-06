/*
* @Author: SyedAli
* @Date:   2019-01-26 16:06:48
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 16:06:51
*/

#include<bits/stdc++.h>
using namespace std;
long long f(long long n){
	if(n==0)
		return 1;
	return n*f(n-1);
}
int main(){
	string s1,s2;
	cin>>s1>>s2;
	long long int c1=0,c2=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='+')
			c1++;
		if(s2[i]=='+')
			c1--;
		else if(s2[i]=='?')
			c2++;
	}
	if(c1 < 0 || c1 > c2 )
		printf("%0.12f",0.0);
	else{
		double ans=(double)(f(c2)/(f(c2-c1)*f(c1)))/(1<<c2);
		printf("%.12f",ans);
	}
	return 0;
}