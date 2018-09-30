//Program to delete an item from the linked list
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void deleteNode(struct Node *head, struct Node *n){
    struct Node *prev = head;
    if(head == n){
	if(head->next == NULL){
	    printf("There is only one node. The list can't be made empty ");
	    return;
	}
	head->data = head->next->data;
	n = head->next;
	head->next = head->next->next;
	free(n);
	return;
    }
    while(prev->next != NULL && prev->next != n)
	prev = prev->next;
    if(prev->next == NULL){
	printf("\n Given node is not present in Linked List");
	return;
    }
    prev->next = prev->next->next;
    free(n);
    return;
}
void push(struct Node **head_ref, int new_data){
    struct Node *new_node =
	(struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}
void printList(struct Node *head){
    while(head!=NULL){
	printf("%d ",head->data);
	head=head->next;
    }
    printf("\n");
}
int main(){
    struct Node *head = NULL;
    int i,tempe;
    printf("Please enter 8 values: ");
    for(i=0; i<8; i+=1){
	scanf("%d",&tempe);
	push(&head,tempe);
    }
    printf("\nGiven Linked List: ");
    printList(head);
    printf("\nDeleting node %d: ", head->next->next->data);
    deleteNode(head, head->next->next);
    printf("\nModified Linked List: ");
    printList(head);
    printf("\nDeleting first node ");
    deleteNode(head, head);
    printf("\nModified Linked List: ");
    printList(head);
    getchar();
    return 0;
}

