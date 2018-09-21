//Program to merge two 1-D Arrays
#include<stdio.h>
#include<conio.h>
void main()
{
int  arr1[50], arr2[50], size1, size2,size,i,j,k, merge[100];
printf("enter array 1 size :");
scanf("%d",&size1);
printf("enter array 1 elments :");
for (i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
}
printf("enter array 2 size:");
scanf("%d",&size2);
printf("enter array 2 elements :");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
}
for(i=0;i<size1;i++)
{
merge[i]=arr1[i];
}
size=size1+size2;
for(i=0,k=size1; k<size && i<size2; i++, k++)
{
merge [k]= arr2[i];
}
printf("now the new array after merging is:\n");
for(i=0;i<size;i++)
{
printf("%d", merge[i]);
}
getch();
}  

