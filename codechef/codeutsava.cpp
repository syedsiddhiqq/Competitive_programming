/*
* @Author: SyedAli
* @Date:   2019-01-28 23:15:30
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-28 23:54:49
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	vector<vector<string > > teams();
	for(int i=0;i<t;i++){
		int num_of_teams,queries,temp;
		scanf("%d %d",&num_of_teams,&queries);
		string str;
		char ch;
		teams.push_back(vector<string> () );
		for(int j=0;j<num_of_teams*3;j++){
			cin>>temp>>str>>ch;
			teams[temp].push_back(str);
		}
		for(int k=0;k<teams.size();k++) printf("%s",teams[k]);

	}
	return 0;
}