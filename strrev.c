#include<stdio.h>
#include<string.h>
int main(){
   char str[50] ;
    printf("Enter string:\n") ;
    gets(str) ;                        // If we use gets(str), we will get the string with space
   // scanf("%s", str) ;               // If we use scanf("%s", str), we will get the string 
                                       //without space 
    printf("Your string is %s ",str) ;
    printf("\n") ;
    printf("Your reversed string is %s ",strrev(str)) ;
    return 0 ;
}