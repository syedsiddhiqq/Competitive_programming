/*
* @Author: SyedAli
* @Date:   2019-01-15 07:13:57
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-15 07:32:35
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,temp,sum=0;
	scanf("%d %d",&n,&m);
	vector <int > tvsets;
	for(int i=0;i<n;i++){
		scanf("%d",&temp);
		if(temp<0) tvsets.push_back(-(temp));
	}
	sort(tvsets.begin(),tvsets.end());
	for(int i=tvsets.size()-1,count=0;i>=0 && count<m;count++,i--) sum+=tvsets[i];
	printf("%d",sum);
	return 0;
}