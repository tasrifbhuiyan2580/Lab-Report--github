#include<stdio.h>
int main(){
char x;
printf("Enter an alphabet :");
scanf("%c",&x);
if((x>='a'&&x<='z')||(x>='A'&& x<='Z'))
printf("Alphabet\n");
else if(x>='0' && x<='9')
printf("Digit\n");
else
printf("Special character\n");
return 0;
}