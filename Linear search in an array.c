#include<stdio.h>
int main()
{
int size[100],x,y,z,found=0;
printf("Enter number of elements:");
scanf("%d",&x);
for(y=0;y<x;y++)
{
scanf("%d",&size[y]);
}
printf("Enter the element of seatch:");
scanf("%d",&z);
for(y=0;y<x;y++)
{
if(size[y]==z)
{
printf("Element found at position %d\n",y+1);
found=1;
break;
}
}
if(!found)
{
printf("Element not found in the array.\n");
}
    return 0;
}