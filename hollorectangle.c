#include<stdio.h>
int main(){
    int row,col,i,j ;
    printf("Enter row: ") ;
    scanf("%d", &row) ;
    printf("\nEnter column: ") ;
    scanf("%d", &col) ;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col){
                printf("*") ;
            }
            else{
                printf(" ") ;
            }
        }
        printf("\n") ;
    }
    return 0 ;
}
