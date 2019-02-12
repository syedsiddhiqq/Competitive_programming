/*
* @Author: SyedAli
* @Date:   2019-01-14 19:49:34
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 23:25:46
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, f=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if(arr[i] == 5)
            f++;
    }
    if(f == n) {
        cout << "-1";
        return 0;
    }
    else
    {
        if(f < 9) {
            cout << "0";
            return 0;
        }
        else {
            int x = f/9;
            for(int i=0;i<9*x;i++)
                cout << "5";
            for(int i=0;i<n-f;i++)
                cout << "0";
        }
    }
}