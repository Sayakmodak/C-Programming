#include<stdio.h>
struct student{
    int roll;
    float cgpa;
    char name[50] ;
};
int main(){
    struct student s1,s2;
    s1.roll=5;
    s1.cgpa=5.5;
    strcpy(s1.name,"Rohan") ;

s2.roll=6;
    s2.cgpa=5.6;
    strcpy(s2.name,"Raju") ;

    printf("Roll No. of Rohan is %d\n",s1.roll) ;

printf("name of s2.name is %s\n",s2.name) ;
    return 0;
}