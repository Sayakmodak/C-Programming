#include<stdio.h>
int main(){
    int a=0;
    int b=1;
    int n;
    printf("Enter the value of N:\n") ;
    scanf("%d",&n) ;
    for(int i=1;i<=n;i++){
        
        printf("%d",a);
        int c=a+b;
        a=b;
        b=c;
    }

    return 0;
}