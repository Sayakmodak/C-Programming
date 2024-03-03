#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    char name[50];
}stu;

int main(){
    stu s1={5,"Raju"} ;

    stu s2={6,"Rohan"} ;

    printf("Name of s1 is %s\n",s1.name) ;
    printf("Name of s2 is %s\n",s2.name) ;
    printf("Roll of s1 is %d\n",s1.roll) ;
    printf("Roll of s2 is %d\n",s2.roll) ;
    return 0;
}