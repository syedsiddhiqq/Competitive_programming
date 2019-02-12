/*
* @Author: SyedAli
* @Date:   2019-01-24 02:26:13
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-24 03:24:52
*/
#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;
#include<bits/stdc++.h>

#define MOD 1000000007

using namespace std;

int main()
{
    #ifdef VSP4
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // VSP4

    long long int i, j, n, m, split, ans;
    string output;

    cin >> n >> m;

    //m - 1 n - 0

    if ((m >= n-1) && (n >= (m-1)/2))
    {
        //possible
        while (m || n)
        {
            if (m > n && n)
            {
                output.push_back('1');
                output.push_back('1');
                output.push_back('0');
                m -= 2;
                n -= 1;
            }
            else if (m == n)
            {
                output.push_back('1');
                output.push_back('0');
                m--;
                n--;
            }
            else if (m + 1 == n)
            {
                output.push_back('0');
                n--;
            }
            else if (m == 2)
            {
                output.push_back('1');
                output.push_back('1');
                m -= 2;
            }
            else if (m == 1)
            {
                output.push_back('1');
                m--;
            }
        }
    }
    else
    {
        output = "-1";
    }

    cout << output;

    return 0;
}