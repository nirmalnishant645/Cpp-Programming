//Program to Swap Adjacent Elemnts of an Array
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int *array,size,i;
int temp;
while(1)
{
printf("Enter size of array :");
scanf("%d",&size);
if (size % 2!=0)
{
printf("\n total no of elements should be even \n try again");
}
else {
break;
}}
array=(int*) malloc(sizeof(int)*size);
for (i=0;i<size;i++)
{
printf("enter element %d:",i+1);
scanf("%d",&array [i]);
}
for (i=0;i<size;i=i+2)
{
temp=array[i];
array[i]=array[i+1];
array[i+1]=temp;
}
printf("\n array elements after swapping adjacent elemnts: \n");
for (i=0;i<size;i++)
{
printf("%d", array[i]);
}
getch();
}

