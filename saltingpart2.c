#include<stdio.h>
#include<string.h>
void salting(char password[]) ;
int main(){
        char password[50] ;
        printf("Enter your password\n") ;
        fgets(password,50,stdin) ;
      //  printf("Your password is %s",salting(password)) ;
      puts(password) ;
      salting(password) ;
      return 0 ;
}

void salting(char password[]){
        char salt[]="123" ;
        char newpassword[100] ;
        strcpy(newpassword,password) ;
        strcat(newpassword,salt) ;
        puts(newpassword) ;
}


