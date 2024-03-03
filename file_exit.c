#include<stdio.h>
int main(){
FILE *fptr;
fptr= fopen("newfie.txt","w");
if(fptr==NULL){
    printf("file does  not exit.\n") ;
}
else{
    fclose(fptr) ;
}
return 0;
}