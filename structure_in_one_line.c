#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    float height;
    int adhar ;
    char name[50];
};
int main(){
    struct student s1={5,5.5,454667456,"Raju"} ;
    struct student s2={6,5.8,45466746,"Rohan"} ;
    struct student s3={7,5.9,454665456,"Mohan"} ;

    printf("Roll no. of Raju is %d\n",s1.roll) ;
    printf("Roll no. of Rohan is %d\n",s2.roll) ;
    printf("Roll no. of Mohan is %d\n",s3.roll) ;
    printf("Name of s1 is %s\n",s1.name) ;
    printf("Name  of s2 is %s\n",s2.name) ;
    printf("Name of s3 is %s\n",s3.name) ;

    struct student *ptr;
    ptr=&s1;
    printf("Roll no. of Raju is %d\n",(*ptr).roll) ;

    ptr=&s2;
    printf("Roll no. of Rohan is %d\n",ptr->roll) ;

    ptr=&s3;
     printf("Name is %s\n",ptr->name) ;
    return 0 ;
}