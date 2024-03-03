#include<stdio.h>
#include<string.h>
int main(){
        char password[50] ;
        printf("enter your password\n") ;
        fgets(password,50,stdin) ;
        printf("Your password which you enter is %s",password) ;
        char salt[]="123" ;
        return 0 ;
}