#include<stdio.h>
int main(){
    int num;
    printf("\n Enter number");
    scanf("\n %d",&num);

    if(num%2==0){
        goto even;

    }
    else{
        goto odd;
    }

    even:{
        printf("\n num is even");
        return 0;
    }
    odd:{
        printf("\n num is odd");
        return 0;
    }
}