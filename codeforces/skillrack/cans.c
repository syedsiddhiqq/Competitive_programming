#include<stdio.h>
int main(){
    int x,y,z,max=0,count=0,min=0,flag=0;
    scanf("%d\n%d\n%d",&x,&y,&z);
    if(x>z || y>z){
        if(x>y)
            max=x,min=y;
        else
            max=y,min=x;
        while(max>=z){
            if(max==z){
              flag = 1;
              break;
            }
            max = max-min;
            count+=2;
        }
        printf("%d",(flag==1)?count:-1);
    }else{
        printf("-1");
    }
    return 0;
}
