#include<stdio.h>
int main(){
char x;
printf("Enter any character:");
scanf("%c",&x);
if((x>='a' && x<='z')||(x>='A' && x<='Z'))
printf("Alphabet\n");
else
printf("Not an alphabet\n");
return 0;
}