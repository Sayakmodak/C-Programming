#include<stdio.h>
int main(){
    int mat1[3][3],mat2[3][3],mat3[3][3],sum,i,j,k ;
    printf("Enter 1st matrix elements :\n") ;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]) ;
        }
    }
    printf("1st matrix elements are :\n") ;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat1[i][j]) ;
        }
        printf("\n") ;
    }
    printf("Enter 2nd matrix elements :\n") ;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat2[i][j]) ;
        }
    }
    printf("2nd matrix elements are :\n") ;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", mat2[i][j]) ;
        }
        printf("\n") ;
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=0 ;
            for(k=0;k<3;k++){
                sum=sum+(mat1[i][k]*mat2[k][j]) ;
                mat3[i][j]=sum ;
            }
        }
    }
  printf("Multiplication of the matrix is : \n") ;
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ", mat3[i][j]) ;
    }
    printf("\n") ;
  }  
    
    return 0 ;
}