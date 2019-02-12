/*
* @Author: SyedAli
* @Date:   2019-01-08 10:57:58
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-08 11:43:36
*/

// C++ program to find 
// minimum number of prefix reversals 
// to sort permutation of first N numbers 
#include <bits/stdc++.h> 
#include <string>

using namespace std; 
  

int prefixreversal(int arr[],int n){
	string start,destination="";
	string r,t;
	for(int i=0;i<n;i++) start+=to_string(arr[i]);
	sort(arr,arr+n);
	for(int i=0;i<n;i++) destination+=to_string(arr[i]);
	if(start == destination) return 0;
	queue < string,int> q;
	pair < string,int> p;
	q.push(make_pair(start,0));
	while(!q.empty()){
		p = q.front();
		t = p.first();
		q.pop();
		for(int j=2;j<=n;j++){
			r = t;
			reverse(r,r+j);
			if(start == destination){
				return (p.second()+1);
			}
			q.push(make_pair(r,p.second()+1));
		}
	}

}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)	 scanf("%d",&arr[i]);
	printf("%d",prefixreversal(arr,n));
	return 0;
}