#include<stdio.h>
#include<malloc.h>
struct Node {
	int data;
	struct Node* next;
};

struct Node* head;
struct Node* temp;
struct Node* new_node;

void insert(int item) {
	new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node -> data = item;
	if(head == NULL) {
		new_node -> next = NULL;
		head = new_node;
		temp = head;
		printf("Node Inserted\n");
	}
	else {
		new_node -> next = temp;
		temp = new_node;
		head= new_node;
		printf("Node Inserted\n");
	}	
}
display() {
	temp = head;
	while(temp != NULL) {
		printf("%d-",temp -> data);
		temp = temp -> next;
	}
}

main() {
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	printf("\n");
	display();
}
