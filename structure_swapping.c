#include<stdio.h>
#include<string.h>
typedef struct student{
    char name[50] ;
    int roll ;
}stu;
int main(){
   stu s1,s2,temp ;
   printf("Enter name for 1st student :\n") ;
   scanf("%s", s1.name) ;
   
   printf("Enter roll for 1st student :\n") ;
   scanf("%d",&s1.roll) ;

   printf("Enter name for 2nd student :\n") ;
   scanf("%s", s2.name) ;
   
   printf("Enter roll for 2nd student :\n") ;
   scanf("%d", &s2.roll) ;
   
   printf("Name of the 1st student is %s \n",s1.name) ;
   printf("Roll of the 1st student is %d \n",s1.roll) ;
   printf("Name of the 2nd student is %s \n",s2.name) ;
   printf("Roll of the 2nd student is %d \n",s2.roll) ;

   temp=s1 ;
   s1=s2 ;
   s2=temp ;
   printf("After swapping :\n") ;

   printf("Name of the 1st student is %s \n",s1.name) ;
   printf("Roll of the 1st student is %d \n",s1.roll) ;
   printf("Name of the 2nd student is %s \n",s2.name) ;
   printf("Roll of the 2nd student is %d \n",s2.roll) ;
   return 0 ;
}