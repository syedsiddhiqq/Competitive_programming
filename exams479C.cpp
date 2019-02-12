/*
* @Author: SyedAli
* @Date:   2019-01-24 03:41:22
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-24 04:00:41
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int n,a,b,day = 0;
	scanf("%d",&n);
	vector<pair<int ,int > > dates;
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		dates.push_back(make_pair(a,b));
	}
	sort(dates.begin(),dates.end());
	pair<int ,int >temp;
	temp = dates[0];
	day = min(temp.first,temp.second);
	for(int i=1;i<n;i++){
		temp = dates[i];
		if(day<=min(temp.first,temp.second)) day = min(temp.first,temp.second);
		else day = max(temp.first,temp.second);
	}
	printf("%d",day);
	return 0;
}