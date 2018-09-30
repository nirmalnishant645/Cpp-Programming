//Stack operation using singly link list
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
}*top;
void initialize(){
	top = NULL;
}
int isEmpty(){
    if (top == NULL)
        return 1;
    else
        return 0;
}
int peek(){
    return top->data;
}
int getStackSize(struct node *head){
    int length = 0;
    if (head == NULL){
		printf("Error : Invalid stack pointer !!!\n");
		return;
    }
    while(head != NULL){
        head = head->next;
        length++;
    }
    return length;
}
void push(int num){
    struct node *temp;
    temp =(struct node *)malloc(1*sizeof(struct node));
    temp->data = num;
    if (top == NULL){
        top = temp;
        top->next = NULL;
    } else {
        temp->next = top;
        top = temp;
    }
}
void pop(){
    struct node *temp;
    if (isEmpty(top)){
        printf("\nStack is Empty\n");
        return;
    } else {
	temp = top;
        top = top->next;
        printf("Removed  Element : %d\n", temp->data);
        free(temp);
    }
}
void printStack(struct node *nodePtr){
	while (nodePtr != NULL){
	printf("%d", nodePtr->data);
	nodePtr = nodePtr->next;
	if(nodePtr != NULL)
		printf("-->");
	}
	printf("\n");
}
void main(){
	int i,tempe,n;
	initialize();
	printf("How many elements you wanna have in the stack?: ");
	scanf("%d",&n);
	printf("\nEnter %d elements to be added to the stack: ",n);
	for(i=0;i<n;i+=1){
		scanf("%d",&tempe);
		push(tempe);
	}
	printf("\nStack Size : %d\n", getStackSize(top));
	printf("\nTop Element : %d\n", peek());
	printf("Stack as linked List\n");
	printStack(top);
	for(i=0;i<=n;i+=1)
		pop();
	printStack(top);
	getch();
	return;
}

