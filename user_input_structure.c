#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[50] ;
    int roll ;
    float cgpa ;
}stu ;
int main(){
    stu s1 ;
    stu *ptr=&s1 ;
    printf("Enter name :\n") ;
    gets(s1.name) ;
    printf("Enter roll :\n") ;
    scanf("%d", &s1.roll) ;
    printf("Enter cgpa :\n") ;
    scanf("%f", &s1.cgpa) ;

    printf("Name is %s ",(*ptr).name) ;
    printf("Roll is %d ",ptr->roll) ;
    printf("Cgpa is %f ",s1.cgpa) ;
    return 0 ;
}