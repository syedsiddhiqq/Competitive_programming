/*
* @Author: SyedAli
* @Date:   2019-01-24 10:34:29
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-24 12:05:33
*/

#include <iostream>
#include <algorithm>
using namespace std;
long long t[3];
int ren(const void *a, const void *b)
{
    return (*(long long*)a)-(*(long long*)b);
}
int main()
{
    cin>>t[0]>>t[1]>>t[2];
    qsort(t, 3, sizeof(long long), ren);
    if(t[2]>(t[0]+t[1])*2)
    {
        cout<<t[0]+t[1];
        return 0;
    }
    cout<<(t[0]+t[1]+t[2])/3;
    return 0;
}