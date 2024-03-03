#include<stdio.h>
typedef struct student{
    int roll;
    char name[50];
}stu;
typedef struct teacher{
    int code;
    char name[50];
}st;
void printinfo(stu std){
    printf("Roll is %d\n",std.roll);
    printf("Name is %s\n",std.name);
}
void printinfot(st tinfo){
    printf("Code is %d\n",tinfo.code);
    printf("Name is %s\n",tinfo.name) ;
}
int main(){
    stu std[3];
    //INPUT FOR STUDENT
    printf("Enter info of s1:\n") ;
    scanf("%d",&std[0].roll);
    scanf("%s",std[0].name);
    printinfo(std[0]) ;
    printf("\n") ;

    printf("Enter info of s2:\n");
    scanf("%d",&std[1].roll);
    scanf("%s",std[1].name);
    printinfo(std[1]);
    printf("\n") ;

    printf("Enter info of s3:\n");
    scanf("%d",&std[2].roll);
    scanf("%s",std[2].name);
    printinfo(std[2]);
    printf("\n") ;

    // INPUT FOR TEACHER    
    st tinfo[2];
    printf("Enter the information of t1:\n");
    scanf("%d",&tinfo[0].code) ;
    scanf("%s",tinfo[0].name) ;
    printinfot(tinfo[0]) ;
    printf("\n") ;

    printf("Enter the information of t2:\n");
    scanf("%d",&tinfo[1].code) ;
    scanf("%s",tinfo[1].name) ;
    printinfot(tinfo[1]) ;
    printf("\n") ;
    return 0;
}