#include<stdio.h>
//conditional statement -if ladder
/*
if(condition 1){}
else if (condition 2){}
else if (condition 3){}
else{}
*/
 int main(){
    int x1,x2;
    printf("\n Enter the value of x1 and x2");
    scanf("%d,%d",&x1,&x2);
    if(x1 > 0 && x2 > 0){
        printf("\n first line");
    }
    else if(x1 < 0 && x2 > 0){
        printf("\n second line");
    }
    else if(x1 > 0 && x2 < 0){
        printf("\n third line");
    }
    else if (x1 > 0 && x2 < 0){
        printf("\n fourth line");
    }
    else{
        printf("\n center line");
    }
    return 0;
}