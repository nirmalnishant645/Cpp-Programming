//Program for Insertion and Deletion Operation on Stack
#include<stdio.h>
#include<conio.h>
int stk[100], top=-1,n;
void show()
{
int i;
for (i=0;i<=top;i++)
printf("%d\t", stk[i]);
printf("\n");
}
void push()
{
int item;
if(top ==n-1)
printf("\b stack is full \n");
else
{
printf("\n enter the item :");
scanf("%d", &item);
stk[++top]= item;
}
show();
}
void pop()
{
if(top==-1)
printf("stack is empty");
else
{
printf("%d is popped ", stk[top]);
top--;
}}
void main()
{
int i , op;
printf("enter the size of the stack:");
scanf("%d", &n);
do
{
printf("\n1:push");
printf("\n2:pop");
printf("\n3:print");
printf("\n4:exit");
printf("\n enter your choice:");
scanf("%d", &op);
switch(op)
{
case 1:
push();
break;
case2:
pop();
break;
case 3:
show();
break;
}
}
while (op!=4);
printf("\n-the end-");
getch();
}

