#include<stdio.h>
void getarray(int arr[],int size){
    for(int itr=0;itr<size;itr++){
        scanf("%d",&arr[itr]);
    }
}
int checkForPresence(int arr1[],int arr2[],int size1,int size2){
    int flag = 0,count=0;
    for(int itr=0;itr<size1;itr++){
      flag = 0;
      for(int itr1=0;itr1<size2;itr1++){
            if(arr1[itr] == arr2[itr1]){
              flag = 1;
              break;
            }
        }
        if(flag == 0)
            count++;
    }
    return count;
}
int main(){
    int size1,size2,count=0;
    scanf("%d %d",&size1,&size2);
    int arr1[size1],arr2[size2];
    getarray(arr1,size1);
    getarray(arr2,size2);
    count += checkForPresence(arr1,arr2,size1,size2);
    count += checkForPresence(arr2,arr1,size2,size1);
    printf("%d",count);
    return 0;
}
