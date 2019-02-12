/*
* @Author: SyedAli
* @Date:   2019-01-05 16:17:08
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-05 16:42:57
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,diff,pair=0;
	scanf("%d",&n);
	int boys[n];
	for(int i=0;i<n;i++) scanf("%d",&boys[i]);
	scanf("%d",&m);
	int girls[m];
	for(int i=0;i<m;i++) scanf("%d",&girls[i]);
	sort(boys,boys+n);
	sort(girls,girls+m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			diff = abs(boys[i] - girls[j]);
			if(diff == 0 || diff == 1){
				pair++;
				girls[j] = -99999;
				break;
			}
		}
	}
	printf("%d",pair);
	return 0;
}