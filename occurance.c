#include<stdio.h>
int occurance(char str[],char ch){
    int count=0;
for(int i=0;str[i]!='\0';i++){
    if(str[i]==ch){
        count++;
    }
    
}
    return count ;
}
int main(){
    char str[]="sayak" ;
    char ch='a';
    printf("%d",occurance(str,ch)) ;
    return 0 ;
}