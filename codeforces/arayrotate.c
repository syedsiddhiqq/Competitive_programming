#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,temp1,temp2,temp3,temp4;
  scanf("%d",&n);
  scanf("%d %d",&temp1,&temp2);
  for(int itr=0;itr<n-1;itr++){
    scanf("%d %d",&temp3,&temp4);
    if(temp2>=temp4 || temp1>=temp4 || temp2>=temp3 || temp1>=temp3){
      temp1 = temp3;
      temp2 = temp4;
    }else{
      printf("NO");
      exit(0);
    }
  }
  printf("YES");
  return 0;
}
