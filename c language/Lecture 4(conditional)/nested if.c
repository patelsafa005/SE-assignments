#include<stdio.h>
// nested condition
int main(){
    int maths,physics,chemistry,subtotal,total;
    printf("\n Enter the marks of maths,physics and chemistry");
    scanf("%d %d %d",&maths,&physics,&chemistry);
    if(maths >= 65  && physics >=55 && chemistry >=50){
        total = maths+physics+chemistry;
        subtotal =maths+chemistry;
        if(total >=190 || subtotal >=145){
            printf("\n eligible for admission");
        }
        else{
            printf("\n not eligible for admission inner");
        }
    }
        else{
            printf("\n not eligible for admission outer");
        }
    return 0;    
    }