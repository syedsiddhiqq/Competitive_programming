  #include<stdio.h>

void checkHopper(char str[],int start,int pos,int size,int jump){
  int itr;
  for(itr=start;itr<size;){
    itr = itr+jump;
    if(str[itr] == str[pos]){
      printf("YES");
      break;
    }else if(str[itr] == '#'){
      printf("NO");
      break;
    }
  }
  if(itr>=size)
    printf("NO");
}

int main(){
  int length,pos_of_hopper,pos_of_insect,count=-1,jump;
  scanf("%d %d\n",&length,&jump);
  char ch,str[length+1];
  while((ch = getchar())!='\n'){
    count++;
    if(ch == 'G')
      pos_of_hopper = count;
    else if(ch == 'T')
      pos_of_insect = count;
    str[count] = ch;
  }
  str[count+1]='\0';
  //printf("%d",pos_of_insect);
  if(pos_of_insect<pos_of_hopper)
    checkHopper(str,pos_of_insect,pos_of_hopper,length,jump);
  else
    checkHopper(str,pos_of_hopper,pos_of_insect,length,jump);
  return 0;;
}
