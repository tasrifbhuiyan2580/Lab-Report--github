#include<stdio.h>
int main(){
char x;
printf("Enter an character:");
scanf("%c",&x);
if(x>='A'&& x<='Z')
printf("Uppercase Alphabet\n");
else if(x>='a' && x<='z')
printf("Lowercase Alphabet\n");
else
printf("Not an Alphabet\n");
return 0;
}