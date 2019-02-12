#include<stdio.h>
#include<string.h>
void str_cpy(char *str,char *str2){
  int index=0,itr=0;
  for(itr =0;itr<str[itr];itr++){
    str2[itr] = str[itr];
  }
  str2[itr]='\0';
}
int main(){
  char str[100];
  fgets(str,100,stdin);
  int count=0,index=0;
  char str1[10][100];
  char *ptr;
  ptr = str;
  for(int itr=0;itr<str[itr];itr++){
    count++;
    if(str[itr]==' '){
      str[itr]='\0';
      str_cpy(ptr,str1[index++]);
      ptr = ptr+count;
      count=0;
    }
  }
  str_cpy(ptr,str1[index++]);
  for(int itr=0;itr<=index-1;itr++)
    printf("%s\n",str1[itr]);
  return 0;
}
