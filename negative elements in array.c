#include<stdio.h>
#define MAX_SIZE 100
int main(){
int sea[MAX_SIZE];
int i,n;
printf("Enter size of the array:");
scanf("%d",&n);
printf("Enter elements in array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&sea[i]);
}
printf("\nAll negative elements in array are:");
for(i=0;i<n;i++)
{
if(sea[i]<0)
{
printf("%d,",sea[i]);
}
}
return 0;
}