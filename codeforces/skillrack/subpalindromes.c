#include<stdio.h>
#include<string.h>

int main(){
    char str[201],temp[201],rev[201];
    scanf("%s",str);
    int temp_count=0,count=0,rev_count=0;
    for(int itr=0;str[itr];itr++){
        temp[0] = str[itr];
        temp_count=1;
        for(int itr1=itr+1;str[itr1];itr1++){
            temp[temp_count++] = str[itr1];
            temp[temp_count]= '\0';
            for(int itr2=temp_count-1;itr2>=0;itr2--){
                rev[rev_count++] = temp[itr2];
            }
            rev[rev_count]='\0';

            if(strcmp(temp,rev)==0)
                count++;
            //printf("%s\n",temp);
            rev_count=0;
        }
    }
    printf("%d",count);
    return 0;
}
