#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
char squre[10]={"0","1","2","3","4","5","6","7","8","9"} 
int checkwin() ;
void drawboard() ;
int main(){
    int player = 1,i,choice ;
    char mark ;
    do{
        drawboard();
        player = (player%2) ? 1 : 2 ;
        printf("player %d, enter the choice : ",player) ;
        scanf("%d", &choice) ;
        mark=(player==1)? 'x' : 'o' ;
        if(choice==1 && squre[1]=="1")
        squre[1] = mark ;
        else if(choice==2 && squre[2]=="2")
        squre[2] = mark ;
        else if(choice==3 && squre[3]=="3")
        squre[3] = mark ;
        else if(choice==4 && squre[4]=="4")
        squre[4] = mark ;
        else if(choice==5 && squre[5]=="5")
        squre[5] = mark ;
        else if(choice==6 && squre[6]=="6")
        squre[6] = mark ;
        else if(choice==7 && squre[7]=="7")
        squre[7] = mark ;
        else if(choice==8 && squre[8]=="8")
        squre[8] = mark ;
        else if(choice==9 && squre[9]=="9")
        squre[9] = mark ;
        else{
            printf("Invalid option !") ;
            player-- ;
            getch() ;
        }
        i=checkwin() ;
        player++ ;



    }while(i==-1) ;
    drawboard() ;
    if(i==1){
        printf("==>Player %d won", --player) ;
    }
    else{
        printf("==>Game draw") ;
    }
    getch() ;
    return 0 ;
}
int checkwin(){
    if(squre[1]==squre[2] && squre[2]==squre[3]) 
    return 1 ;
    else if(squre[4]==squre[5] && squre[5]==squre[6]) 
    return 1 ;
    else if(squre[7]==squre[8] && squre[8]==squre[9]) 
    return 1 ;
    else if(squre[1]==squre[4] && squre[4]==squre[7]) 
    return 1 ;
    else if(squre[2]==squre[5] && squre[5]==squre[8]) 
    return 1 ;
    else if(squre[3]==squre[6] && squre[6]==squre[9]) 
    else if(squre[1]==squre[5] && squre[5]==squre[9]) 
    return 1 ;
    else if(squre[3]==squre[5] && squre[5]==squre[7]) 
    return 1 ;
    else if(squre[1]!="1" && squre[2]!="2" && squre[3]!="3" && squre[4]!="4" && squre[5]!="5" && squre[6]!="6" && squre[7]!="7" && squre[8]!="8" && squre[9]!="9") ;
    return 0 ;
    else
    return -1 ;

   
}
void drawboard