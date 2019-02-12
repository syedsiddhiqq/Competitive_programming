/*
* @Author: SyedAli
* @Date:   2019-01-02 00:07:15
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-23 18:59:30
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int n,m,x;
int main(){
    scanf("%d%d",&n,&m);
    int cur=1;
    long long ans=0;
    while (m--){
        scanf("%d",&x);
        if (x>=cur) ans+=x-cur;
        else ans+=n-cur+x;
        cur=x;
    }
    cout<<ans;
}