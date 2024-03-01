#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char sent[10];
    char sentence[100];
    scanf("%c",&ch);
    scanf("%s",sent);
     scanf("\n");
     scanf("%[^\n]%*c", sentence);
     printf("%c\n",ch);
     printf("%s\n",sent);
     printf("%s",sentence);
    

}
      


      


      

