/*
* @Author: SyedAli
* @Date:   2019-01-18 20:55:06
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-20 13:37:35
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
using namespace std;

int main(){
	vector< pair<int, int> > freq (100000);
	int n,temp;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		// pair<int,int > temp;
		scanf("%d",&temp);
		// temp.se
		if(freq[i].second != temp){
			freq.push_back(make_pair(1,temp));
		}
		else{
			freq[i].first++;
		}
	}
	sort(freq.begin(),freq.end());
	for(int i=0;i<n;i++) p(freq[i].second);
	return 0;
}