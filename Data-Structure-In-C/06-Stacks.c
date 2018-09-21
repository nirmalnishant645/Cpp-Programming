//Basic Data Structure Stacks
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<conio.h>
struct stack
{
int top;
unsigned capacity;
int* array;
};
struct stack* createstack(unsigned capacity)
{
struct stack* stack = (struct stack*)  malloc(sizeof(struct stack));
stack->capacity =capacity;
stack->top= -1;
stack->array = (int*) malloc(stack->capacity * sizeof(int));
return stack;
}
int isfull(struct stack* stack)
{
return stack->top == stack->capacity -1;
}
int isEmpty (struct stack* stack)
{
return stack->top==-1;
}
void push (struct stack* stack, int item)
{
if (isfull(stack))
return;
stack->array[++stack->top] =item;
printf("%d pushed tostack\n",item);
}
int pop(struct stack* stack)
{
if(isEmpty(stack))
return INT_MIN;
return stack->array[stack->top--];
}
void main(){
struct stack* stack = createstack(100);
push (stack, 10);
push (stack, 20);
push (stack, 30);
printf("%d popped from stack\n", pop(stack));
getch();
}

