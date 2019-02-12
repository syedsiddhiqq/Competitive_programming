#include<stdio.h>
int main ()
{
//initializing the variables
    char str[200];
    int i = 0;
    puts ("Enter text:");
//getting the sentence from the user
    fgets(str,200,stdin);

    int k, length = 0; 
    printf("So the words are:\n");
    //this is where the main code starts
    while(str[i]!='\0')
    {

        if (str[i] == ',') {
            k = i - length;

            do {
                putchar (str[k]);
                k++;
            } while (str[k] != ',');
            printf ("\n");
            length = (-1);
        }
        else if (str[i+1] == '\0') {
            k = i - length;

            do {
                putchar (str[k]);
                k++;
            } while (str[k] != '\0');
            length = 0;
        }

        length++;
        i++;
    }
    return 0;
}
