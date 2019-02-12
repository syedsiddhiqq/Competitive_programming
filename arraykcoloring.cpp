/*
* @Author: SyedAli
* @Date:   2019-01-11 16:17:06
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-11 17:40:13
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	pair<int, int> arr[n];
	int ans[n];
	map<int, int> counts;
	for (int i = 0; i < n; ++i)	{
		arr[i] = make_pair(0, i);
		cin >> arr[i].first;
		counts[arr[i].first]++;
		if(counts[arr[i].first] > k){
			cout << "NO" << endl;
			return 0;
		}
	}
	sort(arr, arr+n);
	for (int i = 0; i < n; ++i)	{
		ans[ arr[i].second ] = (i % k) + 1;
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; ++i)	{
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}