#include<stdio.h>
int main(){
    int row ;
    int i,j,sp,coef ;
    printf("Enter row: ") ;
    scanf("%d", &row) ;
    for(i=0;i<row;i++){
        for(sp=0;sp<row-i;sp++){
            printf(" ") ;
        }
        for(j=0;j<=i;j++){
            if(i==0||j==0)
                coef=1 ;
            
            else
                coef=coef*(i-j+1)/j ;
                printf("%d ",coef) ;
            
        }
        printf("\n") ;
    }
    return 0 ;
}