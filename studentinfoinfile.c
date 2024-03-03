#include<stdio.h>
int main(){
    FILE *fptr ;
    fptr=fopen("studentinfoinfile.txt","w") ;

    char name[50] ;
    int roll ;
    float cgpa ;

    printf("Enter name :\n") ;
    gets(name) ;
    printf("Enter roll :\n") ;
    scanf("%d",&roll) ;
    printf("Enter cgpa :\n") ;
    scanf("%f",&cgpa) ;

    fprintf(fptr,"Name is %s \n",name) ;
    fprintf(fptr,"Roll is %d \n",roll) ;
    fprintf(fptr,"Cgpa is %f \n",cgpa) ;
    fclose(fptr) ;
    return 0 ;
}