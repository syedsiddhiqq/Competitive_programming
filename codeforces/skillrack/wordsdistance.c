#include<stdio.h>
#include <stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    char words[20][20],ch,wrd1[200],wrd2[200];
    scanf("%s",words[0]);
    int words_count = 1,temp,min=9999;
    while((ch = getchar())==' ')
        scanf("%s",words[words_count++]);
    scanf("%s",wrd1);
    scanf("%s",wrd2);
    for(int itr=0;itr<words_count;itr++)
        if(strcmp(wrd1,words[itr])==0){
            for(int itr1=0;itr1<words_count;itr1++){
                if(strcmp(wrd2,words[itr1])==0){
                    temp = abs(itr-itr1);
                    if(min>temp){
                        min = temp;
                    }
                }
            }
        }
    printf("%d",min);
    return 0;
}
