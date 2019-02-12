#include<stdio.h>
int main(){
    char str[101];
    fgets(str,101,stdin);
    int key1,key2;
    scanf("%d\n%d",&key1,&key2);
    for(int itr=0;str[itr];itr++){
        if(str[itr]>=97 && str[itr]<=122){
            int temp = (str[itr]+key1)%97;
            if(temp<=26)
                printf("%c",'a'+temp);
            else{
                printf("%c",'a'+(temp%26));
            }
        }else if(str[itr]>=48 && str[itr]<=57){
            printf("%d",(str[itr]-'0')+key2);
        }else if(str[itr]==' ')
            printf(" ");
    }
    return 0;
}
