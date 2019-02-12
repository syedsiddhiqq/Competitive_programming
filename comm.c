#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char input[200],words[10][10];
int length=0,i=0,j=0,k=0,t;

fgets(input,200,stdin);


//counting the length of str
while(input[length] != '\0')
{
    length++;
}

for(i=1;i<=length;i++)
{
   if(input[i] == ' ' || input[i] == '}')
        {
            words[j][k] = '\0';
            j++;
            k=0;
        }
    else
        {
            words[j][k] = input[i];
            k++;
        }
}//loop ends
//Assigning to integer array
int temp[j];
for(i=0;i<j;i++)
{
    temp[i] = atoi(words[i]);
    printf("%d\n",temp[i]);
}

return 0;
}
