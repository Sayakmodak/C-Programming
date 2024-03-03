#include<stdio.h>
int main(){
    int num ;
    printf("Enter a number for multiple table:\t") ;
    scanf("%d", &num) ;
    printf("\n") ;
    printf("Multiple table of %d is:\n",num) ;
    for(int i=1;i<=10;i++){
    printf("%d * %d= %d\n",i,num,i*num) ;

    }
    return 0 ;
}