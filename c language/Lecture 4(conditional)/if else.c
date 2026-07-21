#include<stdio.h>
//conditional statement -if else
/*
if(condition){
//block
}
else{
}
*/
int main(){
    int num;
    printf("/n Enter your num");
    scanf("%d",&num);
    if(num %2 ==0){
    printf("/n Even number");
    }
    else{
        printf("/n Odd number");
    }
    return 0;
}