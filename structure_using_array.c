#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[60] ;
} ;
int main(){
    struct student s[50] ;
    s[0].roll=5;
    strcpy(s[0].name,"Raju") ;

     s[1].roll=5;
    strcpy(s[1].name,"Rohan") ;

    printf("Name of s[0] is %s\n",s[0].name) ;
    printf("Name of s[1] is %s\n",s[1].name) ;
    printf("Roll of Raju is %d\n",s[0].roll) ;
    printf("Roll of Rohan is %d\n",s[1].roll) ;
    return 0;
}