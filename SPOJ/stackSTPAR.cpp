/*
* @Author: SyedAli
* @Date:   2019-01-24 15:57:17
* @Last Modified by:   SyedAli
* @Last Modified time: 2019-01-24 18:03:59
*/

#include<bits/stdc++.h>
#define p(i) printf("%d",i);
#define pp(a,b) printf("%d %d\n",a,b);
#define F(i,a,b) for (int i = (int)(a); i < b; ++i)
#define FR(i,b,a) for (int i = (int)(b)-1; i >= (a); --i)
#define sl(a) scanf("%I64d",&a);
using namespace std;

int a[1111], n;

int main() {
  while (scanf("%d", &n) && n != 0) {
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int k = 0, i = 0;
    stack<int> st;
    while (i < n) {
      while (st.size() && st.top() == k + 1) k++, st.pop();
      if (a[i] != k + 1) st.push(a[i]);
      else k++;
      i++;
    }
    while (st.size() && st.top() == k + 1) k++, st.pop();
    puts(k == n ? "yes" : "no");
  }
}