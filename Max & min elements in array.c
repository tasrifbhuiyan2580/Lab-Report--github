#include<stdio.h>
#define MAX_SIZE 100
int main()
{
int tea[MAX_SIZE];
int i,max,min,s;
printf("Enter size of the array:");
scanf("%d",&s);
printf("Enter %d elements in the array:");
for(i=0;i<s;i++)
{
scanf("%d",&tea[i]);
}
max=tea[0];
min=tea[0];
for(i=1;i<s;i++)
{
if(tea[i]>max)
{
max=tea[i];
}
if(tea[i]<min)
{
min=tea[i];
}
}
printf("Maximum element =%d",max);
printf("Minimum element=%d",min);
return 0;
}