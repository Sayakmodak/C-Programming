#include<stdio.h>
int main(){
    int row,sp,coef,i,j ;
    printf("Enter the  number of row\n") ;
    scanf("%d", &row) ;
    for(i=0;i<row;i++){
        for(sp=0;sp<row-i;sp++){
            printf(" ") ;
        }
        for(j=0;j<=i;j++){
            if(j==0||i==0)
                coef=1 ;
            
            else
                coef=coef*(i-j+1)/j ;
                printf("%d ",coef) ;
            
            
        }
        
        printf("\n") ;
    }
    return 0 ;
}