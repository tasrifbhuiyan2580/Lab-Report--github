#include<stdio.h>
#define MAX_SIZE 1000
int main(){
int sea[MAX_SIZE];
int i,n;
printf("Enter size of array:");
scanf("%d",&n);
printf("Enter %d elements in the array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&sea[i]);
}
printf("\nElements in array are:");
for(i=0;i<n;i++)
{
printf("%d,",sea[i]);
}
return 0;
}