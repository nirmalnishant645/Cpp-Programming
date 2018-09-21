//Program to implement an Array and find average
#include<stdio.h>
#include<conio.h>
void main()
{
int avg =0;
int sum =0;
int x=0;
int num[4];
for (x=0;x<4;x++)
{
printf("enter number %d \n", (x+1));
scanf("%d", &num[x]);
}
for(x=0;x<4;x++)
{
sum = sum+num[x];
}
avg=sum/4;
printf("average of entered numbers is: %d", avg);
 getch();
} 


