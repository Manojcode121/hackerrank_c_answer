#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i=0,len;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    len=strlen(s);
    //Write your logic to print the tokens of the sentence here.
for(int l=0;l<len;l++)
{
    if(s[l]==' ')
    {
        s[l]='\n';
    }
    else{
     
    }
     printf("%c",s[l]);    
}
  
    return 0;
}
