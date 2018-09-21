//Program to perform Multiplication of Matrices
#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,p,q,c,d,k, sum=0;
int  first[10][10], second[10][10], multiply[10][10];
printf("enter no of rows and columns of first matrix \n");
scanf("%d%d", &m,&n);
printf("enter elments of first matrix \n");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
scanf("%d", &first [c][d]);
printf("enter no rows and columns of second matrix\n");
scanf("%d%d", &p,&q);
if(n !=p)
printf("the matrices cant be multiplied with each other \n");
else
{
printf("enter elments of second matrix\n");
for (c=0;c<m;c++)
for (d=0;d<n;d++)
scanf("%d", &second[c][d]);
for(c=0;c<m;c++) {
for(d=0;d<n;d++)  {
for(k=0;k<p;k++)   {
sum=sum+ first[c][k]*second[k][d];
}
multiply[c][d]= sum;
sum=0;
}
printf("product of the matrices:\n ");
for(c=0;c<m;c++)
for(d=0;d<n;d++)
printf("%d\t", multiply[c][d]);
printf("\n");
}
getch();
}
}

