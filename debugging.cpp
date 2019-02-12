

#include<bits/stdc++.h>
#define p(i) printf("%d\n",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

vector<int> val;
void dfs(int len,int now,int sum)
{
    if(sum==10)val.push_back(now);
    if(len>7 || sum>10)return;
    for(int i=(len==0);i<10;i++)
        // { printf("%d %d %d\n",len,now*10+i,sum+i);
        	dfs(len+1,now*10+i,sum+i);
}
int main()
{
    dfs(0,0,0);
    // for(int i=0;i<val.size();i++)p(val[i])
    // p(val.size())
    sort(val.begin(),val.end());
    int k;
    scanf("%d",&k);
    printf("%d\n",val[k-1]);
    return 0;
}