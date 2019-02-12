/*
* @Author: SyedAli
* @Date:   2019-01-14 09:50:14
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 10:56:55
*/

#include<bits/stdc++.h>
using namespace std;
vector<pair<long long int, long long int > > elems;

long long int bsearchfunc(long long int l,long long int r,long long int key){
	while(l<=r){
		long long int mid = l + (r - l) / 2; 
		if(elems[mid].first == key) return elems[mid].second;
		if(elems[mid].first<key) l = mid+1;
		else r = mid-1;
	}
}
int main(){
	long long int n,count=0,vasya=0,petya=0,i;
	scanf("%I64d",&n);
	for(long long int i=0;i<n;i++){
		pair<long long int ,long long int> p;
		p = make_pair(0,i);
		scanf("%d",&p.first);
		// prlong long intf("%d %d\n",p.first,p.second);
		elems.push_back(p);
	}
	sort(elems.begin(),elems.end());
	long long int q,temp;
	scanf("%I64d",&q);
	while(q--){
		scanf("%I64d",&temp);
		long long int ans = bsearchfunc(0,n-1,temp)+1;
		vasya+=ans;
		petya+=(n-ans)+1;
		// prlong long intf("%d %d %d\n",ans,vasya,petya);
	}
	
	printf("%I64d %I64d",vasya,petya);
	return 0;
}