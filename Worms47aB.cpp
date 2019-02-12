/*
* @Author: SyedAli
* @Date:   2019-01-05 16:51:58
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-05 18:12:47
*/

#include<bits/stdc++.h>
using namespace std;
int n,arr[1000003],i,x=1,m,t;
int main(){
	cin>>n;
	for(i=1;i<=n;i++)
		{
			cin>>t;
			while(t--)
				arr[x]=i,x++;
		}
	cin>>m;
	while(m--)
		cin>>t,cout<<arr[t]<<endl;	
}