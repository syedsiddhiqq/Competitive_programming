/*
* @Author: SyedAli
* @Date:   2019-01-24 02:11:05
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-24 02:11:11
*/

#include<bits/stdc++.h>
using namespace std;
const int MAXN = 5e5 + 10;

int a[MAXN];
long long sum[MAXN];

template <typename T> inline void read(T &x)
{
    T f = 1; x = 0;
    char c = getchar();
    for (; !isdigit(c); c = getchar()) if (c == '-') f = -f;
    for (; isdigit(c); c = getchar()) x = (x << 3) + (x << 1) + c - '0';
    x *= f;
}

int main()
{
        
        int n;
        read(n);
        for (int i = 1; i <= n; i++) 
        {
                read(a[i]);
                sum[i] = sum[i - 1] + a[i];
        }
        if (sum[n] % 3 != 0)
        {
                printf("0\n");
                return 0;
        }
        long long value = sum[n] / 3 , ans = 0 , cnt = 0;
        for (int i = 1; i < n; i++)
        {
                if (sum[i] != 2 * value) 
                {
                        if (sum[i] == value) cnt++;
                        continue;
                }
                ans += cnt;
                if (sum[i] == value) cnt++;        
        }
        printf("%I64d\n",ans);
        
        return 0;
    
}