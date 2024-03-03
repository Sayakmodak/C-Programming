#include<stdio.h>
int main(){
    FILE *fptr ;
    fptr=fopen("odd.txt","w") ;
    int n;
    printf("Enter number:\n") ;
    scanf("%d",&n) ;

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            fprintf(fptr,"Odd numbers:%d\n",i) ;
           
        }
        
    }
    fprintf(fptr,"\n") ;

    for(int j=1;j<=n;j++){
        if(j%2==0){
            fprintf(fptr,"Even numbers:%d\n",j) ;
        }
    }

    
    fclose(fptr) ;
    return 0 ;
}