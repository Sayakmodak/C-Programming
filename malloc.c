#include<stdio.h>
int main(){
   // printf("%d\n",sizeof(int)) ;
  //  printf("%d\n",sizeof(float)) ;
   // printf("%d\n",sizeof(char)) ;

   float *ptr;
   ptr=(float *)malloc(5* sizeof(float)) ;
   ptr[0]=1;
   ptr[1]=2;
   ptr[2]=3;
   ptr[3]=4;
   ptr[4]=5;
   for(int i=0;i<5;i++){
    printf("%f\n",ptr[i]) ;
   }
    return 0 ;
}