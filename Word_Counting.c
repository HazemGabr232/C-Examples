#include <stdio.h>

#include <string.h>

 

void main()

{

    char s[200];

    int count = 0, i;

 

    printf("enter the string\n");

    scanf("%[^\n]s", s);

    for (i = 0;s[i] != '\0';i++)

    {

        if ((s[i] == ' '||s[i] == '\t')&& (s[i+1]!=' '&&s[i+1]!='\0'&& s[i+1]!='\t') )
            count++;
    

    }

    printf("number of words is  %d\n", count + 1);

}
