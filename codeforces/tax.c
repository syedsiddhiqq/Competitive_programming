#include<stdio.h>
int main(){
  int n,sum=0,temp=4,taxis=0;
  scanf("%d",&n);
  int arr[5]={0},taxi[n];
  for(int itr=0;itr<n;itr++){
    scanf("%d",&taxi[itr]);
    arr[taxi[itr]]++;
  }
  for(int itr=0;itr<arr[3];itr++){
    taxis = taxis+1;
    if(arr[1]>0)
      arr[1] = arr[1]-1;
  }
  for(int itr=0;itr<arr[2];itr++){
    taxis = taxis+1;
    if(arr[2]>0 && arr[1]>0)
      arr[2] = arr[2]-1,arr[1]=arr[1]-1;
    else if(arr[2]>0)
        arr[2] = arr[2]-1;
  }
  if(arr[1]>1){
      taxis = taxis + arr[1]/4+(arr[1]%4>0?1:0);
  }

  taxis += arr[4];
  printf("%d",taxis);
  return 0;
}
