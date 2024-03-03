#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("table.txt","w") ;

    int num;
    printf("Enter number:\n") ;
    scanf("%d",&num) ;
    for(int i=1;i<=10;i++){
        fprintf(fptr,"%d x %d=%d\n",num,i,num*(i)) ;

    }

    

    return 0 ;
}