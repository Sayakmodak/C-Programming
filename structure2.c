#include<stdio.h>
struct student{
    char name[50] ;
    int roll ;
    float cgpa ;
};
int main(){
    struct student s1={"raju",5,5.5} ;
    struct student s2={"raju",5,5.5} ;
    printf("Roll is %d ",s1.roll) ;
    printf("Name is %s ",s1.name) ;
    printf("Cgpa is %f ",s1.cgpa) ;
    return 0 ;
}