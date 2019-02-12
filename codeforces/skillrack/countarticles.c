#include<stdio.h>
#include<string.h>

int checkforarticle(char *str){
    int count=0,len = strlen(str);
    if(len == 1){
        if(str[0]=='a'||str[0]=='A'){
            return 1;
        }
    }else if(len == 2){
        if((str[0]=='A' && str[1]=='n') || (str[0]=='a' && str[1]=='n')){
            return 1;
        }
        if((str[0]=='a' && str[1]<65) || (str[0]=='A' && str[1]<65)){
            return 1;
        }
    }else if(len==3){
        if((str[0]=='t' && str[1]=='h' && str[2]=='e') || (str[0]=='T' && str[1]=='h' && str[2]=='e')){
            return 1;
        }
        if((str[0]=='a' && str[1]=='n' && str[2]<65) || (str[0]=='A' && str[1]=='n' && str[2]<65)){
            return 1;
        }
    }else if(len==4){
        if((str[0]=='t' && str[1]=='h' && str[2]=='e' && str[3]<65) || (str[0]=='T' && str[1]=='h' && str[2]=='e' && str[3]<65)){
            return 1;
        }
    }
    return 0;
}

int main(){
    char str[101],ch;
    scanf("%s",str);
    int count;
    count = checkforarticle(str);
    while((ch=getchar())==' '){
        scanf("%s",str);
        count+=checkforarticle(str);
    }
    printf("%d",count);
    return 0;
}
