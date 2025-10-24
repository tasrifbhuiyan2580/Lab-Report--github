#include<stdio.h>
int main(){
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x%5==0 && x%11==0)
printf("Divisible by 5 and 11\n");
else
printf("Not divisible by both\n");
return 0;
}