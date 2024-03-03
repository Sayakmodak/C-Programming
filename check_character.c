#include<stdio.h>
void checkcharacter(char str[],char ch) ;
int main(){
    char str[]="apna college" ;
    char ch='e';
     checkcharacter(str,ch) ;
    return 0 ;
}

void checkcharacter(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("character is present!");
            return ;
        }

    }
    printf("character is not present!");
}