#include<stdio.h>
#include<string.h>
int main(){
    char str[201],words[20][30],ch;
    int key,words_count=1,temp=-1;
    scanf("%d",&key);
    scanf("%s",words[0]);
    while((ch=getchar())==' ')
        scanf("%s",words[words_count++]);
    for(int itr=0;temp<words_count-1;itr++){
        for(int itr1=0;itr1<=itr;itr1++){
            if(++temp<words_count){
            char *str1;
            str1 = &words[temp][strlen(words[temp])-key];
           // temp++;
            printf("%d ",temp);
            }else{
                for(int itr2=0;itr2<key;itr2++)
                    printf("*");
                printf(" ");
            }
        }
        printf("\n");
    }
    //printf("%s",words[22] );
    return 0;
}
