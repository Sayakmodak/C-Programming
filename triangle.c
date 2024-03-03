/*                         4
                          434
                         43234 
                        4321234
                       ---------
*/

#include<stdio.h>
int main(){
    int n ;
    printf("Enteer your number:\n") ;
    scanf("%d", &n) ;

    for(int i=n;i>=1;i--){
        for(int j=0;j<=i-1;j++)
        printf(" ") ;
        for(int k=n;k>=i;k--)
        printf("%d",k) ;
        for(int k=i+1;k<=n;k++)
        printf("%d",k) ;
        printf("\n") ;
    }
    return 0 ;
}