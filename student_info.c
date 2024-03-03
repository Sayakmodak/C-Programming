#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("student info.txt","w") ;
    char name[50] ;
    int age;
    int roll ;

    
    printf("Enter name:\n") ;
    scanf("%s",name) ;
    printf("Enter age:\n") ;
    scanf("%d",&age) ;
    printf("Enter roll:\n") ;
    scanf("%d",&roll) ;

    fprintf(fptr,"Student name: %s\n",name) ;
    fprintf(fptr,"Student age: %d\n",age) ;
    fprintf(fptr,"Student roll: %d\n",roll) ;

    
    fclose(fptr) ;
    return 0;
}