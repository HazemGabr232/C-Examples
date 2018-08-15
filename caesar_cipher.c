#include <stdio.h>
 
int main() {
    char array[100]={0}, cipher[100]={0};
    
    int key;  
    int c;
    printf("enter your key : ");
    scanf("%d\n",&key);
   
    while((c=getchar()) != '\n') {
        static int x=0, i=0;
 
        array[i++]=(char)c;
        cipher[x++]=(char)(c+key);
    }
 
    printf("%s\n", array);
    printf("%s\n", cipher); 
    return 0;
} 
