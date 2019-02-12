/*
* @Author: SyedAli
* @Date:   2019-01-14 08:56:10
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-14 08:56:13
*/

#include<bits/stdc++.h>
using namespace std;
int n;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    cin >> n ;
    if ((n & 1)) {
        cout << "-1\n";
        return 0;
    }
    for (int i = n; i > 0; i--)
        cout << i << ' ';
}