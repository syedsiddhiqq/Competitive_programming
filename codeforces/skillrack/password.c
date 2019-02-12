#include<stdio.h>
#include<string.h>
int main(){
    char str[201];
    fgets(str,201,stdin);
    int len = strlen(str),spl=0,upcase=0,lcase=0,num=0;
    if(len>8){
        if(len<=25){
            for(int itr=0;str[itr];itr++){
                if(str[itr]>=65 && str[itr]<=90){
                    upcase = 1;
                }else if(str[itr]>=97 && str[itr]<=122){
                    lcase = 1;
                }else if(str[itr]>=48 && str[itr]<=57){
                    num++;
                }else{
                    spl = 1;
                }
            }
            if(spl == 1 && upcase ==1 && lcase ==1 && num>=2){
                printf("Valid");
            }else
                printf("INVALID");

        }else{
            printf("INVALID");
        }
    }else{
        printf("INVALID");
    }
    return 0;
}
