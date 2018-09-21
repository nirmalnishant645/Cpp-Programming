//Evaluate Postfix Expression
#include<stdio.h>
#include<ctype.h>
#include<math.h>
int stack[50],pop();
int top=-1;
void push (char);
int evalute (char[], int[]);
int main()
{
int i=0;

char postfix[20];
int value[20],result;
printf("enter a vallid postfix expression:");
gets(postfix);

while(postfix[i]!='\0')
{
 if (isalpha (postfix[i]))
{
fflush(stdin);
printf("\n enter the value of %c:\t",postfix[i]);
scanf("%d",&value[i]);
}
i++;
}
result=evalute(postfix,value);
printf("\n the evalution of the postfix %s=%d", result);
return(0);
}
void push(char num)
{
top=top+1;
stack[top]=num;
}int pop()
{
int num;
num=stack[top];
top=top-1;
return (num);
}
int evalute (char postfix[], int dat[])
{
int i=0;
int op1,op2,res;
char ch;
while (postfix[i]!='\0')
{
ch=postfix[i];
if (isalpha(postfix[i]))
{
push(dat[i]);
}
else
{
op1=pop();
op2=pop();
switch(ch)
{
case '-':
push(op2-op1);
break;
case '+':
push(op2+op1);
break;
case '*':
push(op2*op1);
break;
case '/':
push(op2/op1);
break;
case '^':
push(pow(op2,op1));
break;
}}
i++;
}
res=pop();
return (res); 
}

