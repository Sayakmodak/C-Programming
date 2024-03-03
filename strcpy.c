#include<stdio.h>
#include<string.h>
int main(){
    char st1[]="hello" ; // old string 
    char st2[]="world" ; // new string 
    strcpy(st2,st1) ; // (new string,old string) 
    puts(st2) ; // old string is copied in new string 
    puts(st1) ;
    return 0 ;
}