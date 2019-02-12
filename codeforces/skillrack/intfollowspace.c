#include<stdio.h>
#include <stdlib.h>
int main(){
    int count1=0,count2=0,arr1[51],arr2[5],point_a=0,point_b=0;
    char ch;
    scanf("%d",&arr1[0]);
    while((ch=getchar())==' ')
        scanf("%d",&arr1[++count1]);
    scanf("%d",&arr2[0]);
    while((ch=getchar())==' ')
        scanf("%d",&arr2[++count2]);
    for(int itr=0;itr<=count1;itr++){
        if(arr1[itr] == arr2[itr])
            point_b++,point_a++;
        else if(arr1[itr]>arr2[itr])
            point_a+=3;
        else
            point_b+=3;
        //printf("%d %d",arr1[itr],arr2[itr]);
    }
    printf("%d %d",point_a,point_b);
    return 0;
}
