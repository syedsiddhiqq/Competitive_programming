/*
* @Author: SyedAli
* @Date:   2019-01-11 17:08:32
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-11 17:09:31
*/
#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k;
	cin >> n >> k;
	vector<pair<int, int> > a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i].first;
		a[i].second = i;	
	}
	
	sort(a.begin(), a.end());
	for(int i=0;i<n;i++){
	    printf("%d%d\n",a[i].first,a[i].second);
	}
	return 0;
}