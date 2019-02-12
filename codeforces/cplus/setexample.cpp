#include<bits/stdc++.h>
using namespace std;
int main(){
  char str1[200];
  scanf("%s",str1);
  vector<char> vec;
  for(int itr=0;str1[itr];itr++){
    vec.push_back(str1[itr]);
  }
  auto last = std::unique(vec.begin(), vec.end());
  vec.erase(last, vec.end());
  //vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
  for(char s:vec)
  cout<<s<<endl;
  return 0;
}
