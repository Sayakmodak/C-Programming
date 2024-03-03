#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("file5.txt","r") ;
    int n;
   // fscanf(fptr,"%d",&n) ;
   // printf("%d\n",n) ;
   // fscanf(fptr,"%d",&n) ;
   // printf("%d\n",n) ;
   // fscanf(fptr,"%d",&n) ;
   // printf("%d\n",n) ;
   // fscanf(fptr,"%d",&n) ;
   // printf("%d\n",n) ;
  //  //printf("%d\n",n) ;
   // fscanf(fptr,"%d",&n) ;
    //printf("%d\n",n) ;
    n=fscanf(fptr,"%d",&n) ;
    while(n!=EOF){
        printf("%d",n) ;
        n=fscanf(fptr,"%d",&n) ;
    }
    printf("\n") ;


    fclose(fptr) ;
    return 0;
}