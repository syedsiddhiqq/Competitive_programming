#include<stdio.h>
#include<string.h>
int getLength(char *str){
  int itr=0,count=0;
  while(str[itr++]){
    count++;
  }
  return count;
}

int main(){
  int n,itr,min=9999,jtr,index,index1=0,len,count=0;
  scanf("%d",&n);
  int stringlen[n];
  char strings[n][1000000],sortedarray[n][100000];
  for(itr=0;itr<n;itr++){
      scanf("%s",strings[itr]);
  }
  for(itr=0;itr<n;itr++){
    stringlen[itr] = getLength(strings[itr]);
  }

  for(itr=0;itr<n;itr++){
    min = 9999;
    for(jtr=0;jtr<n;jtr++){
      if(min>stringlen[jtr]){
        min = stringlen[jtr];
        index = jtr;
      }
    }
    stringlen[index] = 9999;
    strcpy(sortedarray[itr],strings[index]);
    //printf("%s\n",strings[index]);
  }

  for(itr=0;itr<n-1;itr++){
    index = 0;
    index1=0;
    count=0;
    len = getLength(sortedarray[itr]);
    while(sortedarray[itr+1][index1]){
        if(sortedarray[itr][index++] == sortedarray[itr+1][index1++]){
          count++;
          if(count==len)
            goto CHECK;
          continue;
        }else{
          count=0;
            index=0;
        }
      }
      CHECK:
     if(len == count)
        {
          continue;
        }
      else{
        printf("NO");
        return 0;
      }
      //printf("%d\n",count );
  }
  printf("YES\n");
  for(itr=0;itr<n;itr++)
    printf("%s\n",sortedarray[itr] );
return 0;
}
