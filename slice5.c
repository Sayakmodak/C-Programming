#include<stdio.h>
void slice(char str[],int n,int m) ;
int main(){
    char str[50]="helloworld" ;
    slice(str,3,6) ;
    return 0 ;
}

void slice(char str[],int n,int m){
    int j=0;
    char nstr[50] ;
    for(int i=n;i<=m;i++,j++){
        nstr[j]=str[i] ;
    }
    puts(nstr) ;
}