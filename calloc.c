#include<stdio.h>
int main(){
    int *ptr;
    int n;

    ptr=(int*)calloc(n,sizeof(int)) ;
    printf(("Enter n:\n")) ;
    scanf("%d",&n) ;
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]) ;
    }

    return 0 ;
}