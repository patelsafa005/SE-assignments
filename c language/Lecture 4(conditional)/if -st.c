#include<stdio.h>
// conditional statement -if 
/*  
 if (condition){
     //block
}
     */
int main(){
int num;
printf("/n Enter num");
scanf("%d",&num);
if(num>0){
printf("\n square of %d=%d",num,num*num);
}
return 0 ;
}