#include<stdio.h>
#include<string.h>
void slice(char str[],int n,int m) ;
int main(){
    char str1[]="helloworld";
    slice(str1,3,6) ;

    return 0 ;
}
void slice(char str[],int n,int m){
    char newstr[50] ;
    int j=0 ;
    for(int i=n;i<=m;i++,j++){
        newstr[j]=str[i] ;
    }
    puts(newstr) ;
}