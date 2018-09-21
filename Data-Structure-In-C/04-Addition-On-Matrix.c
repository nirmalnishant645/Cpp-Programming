//Program to perform addition on Matrix
#include<stdio.h>
#include<conio.h>
void main(){
int m,n,c,d, first[10][10] ,second[10][10] ,sum[10][10];
printf("enter the number of rows and columns of matrix\n");
scanf("%d%d", &m, &n);
printf("enter the elments of first matrix\n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d", &first[c][d]);
printf("enter the ements of second matrix\n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d", &second[c][d]);
printf("Sum of matrices:\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
sum[c][d] =first[c][d]+ second[c][d];
printf("%d\t", sum[c][d]);
}
printf("\n");
getch();
}
}

