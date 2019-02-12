/*
* @Author: SyedAli
* @Date:   2019-01-23 19:15:04
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-23 19:28:15
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int n,m,k,arr[10005],ans;
int main()
{
	cin>>n>>m>>k;
	for(int i=0;i<m+1;i++)cin>>arr[i];

	for(int i=0;i<m;i++)
		if(__builtin_popcount(arr[m]^arr[i])<=k)
			ans++;
cout<<ans;
}