#include<iostream>
#include<set>
#include<cstdio>
using namespace std;
int main(){
  int size1,size2;
  scanf("%d %d",&size1,&size2);
  set<int> se;
  set<int> se1;
  while(size1--){
    int temp;
    scanf("%d",&temp);
    se.insert(temp);
  }
  while(size2--){
    int temp;
    scanf("%d",&temp);
    se1.insert(temp);
  }

  printf("%d",se.get(1));
  printf("%d",size1 = se.size());
  return 0;
}
