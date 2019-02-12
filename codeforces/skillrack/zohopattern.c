#include<stdio.h>
#include<string.h>
int main(){
    char str[51];
    scanf("%s",str);
    int start=0,end=strlen(str)-1,len = strlen(str);
    for(int itr=0;str[itr];itr++){
        for(int itr1=0;str[itr1];itr1++){
            if(itr1==start && start!=end)
              printf("%c",str[start]);
            if(itr1==end)
                printf("%c",str[end--]);
            else
              printf(" ");
            }
        start++;
        printf("\n");
    }
    return 0;
}
