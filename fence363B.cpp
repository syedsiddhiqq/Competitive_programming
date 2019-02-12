/*
* @Author: SyedAli
* @Date:   2019-01-26 09:59:21
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-26 11:08:25
*/
#include<bits/stdc++.h>
#define p(i) printf("%d\n",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

const int N = 522222;
int a[N], sum[N];
int main()
{
        int n, k;
        scanf("%d%d", &n,&k);
        int mi = 1000000000, ret;
        for(int i = 1; i <= n; i++) {
                scanf("%d", &a[i]);
                sum[i] = sum[i - 1] + a[i];
                if(i >= k) {
                        if(sum[i] - sum[i - k] < mi) {
                                mi = sum[i] - sum[i - k];
                                ret = i - k + 1;
                        }
                }
        }
        printf("%d\n", ret);
        return 0;
}