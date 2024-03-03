#include<stdio.h>
void checkcharacter(char str[],char ch) ;
int main(){
    char str[50];
    char ch;
    printf("Enter your character:") ;
    fgets(str,50,stdin) ;
    printf("Enter your value:") ;
    scanf("%c",&ch) ;
    checkcharacter(str,ch) ;

    return 0;
}

void checkcharacter(char str[],char ch){
    for(int i=0;str[i]='\0';i++){
        if(str[i]=='ch'){
            printf("Character is present!") ;
            return ;
        }
    }
    printf("Character is not present!") ;
}