#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    int data;  
    struct node* next;
};  
struct node* head; 
struct node* temp; 
struct node* new_node;
void lastinsert(int item)  
    {  
        new_node = (struct node*)malloc(sizeof(struct node));     
         
        if(new_node == NULL)  
        {  
            printf("OVERFLOW\n");     
        }  
        else  
        {  
            new_node -> data = item;  
            if(head == NULL)  
            {  
                new_node -> next = NULL;  
                head = new_node;  
                printf("Node inserted\n");  
            }  
            else  
            {  
                 temp = head;  
                while (temp -> next != NULL)  
                {  
                    temp = temp -> next;  
                }  
                temp->next = new_node;  
                new_node -> next = NULL;  
                printf("Node inserted\n");       
            }  
        }  
    }  
    insertInMiddle(struct node* head,int x) {
	temp = head;
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node -> data = 100;
	while(temp != NULL && temp -> data != x) {
		temp = temp -> next;
	}
	if(temp -> next == NULL){
		new_node -> next = NULL;
		temp -> next = new_node;
		printf("\n\nNew node inserted.");
	}
	else{
		new_node -> next = temp -> next;
		temp -> next = new_node;
		printf("\n\nNew node inserted.");	
	}
}
    void printing() {
	 temp = head;
	while(temp != NULL) {
		printf("%d-",temp->data);
		temp = temp -> next;
	}
}
main ()  
{  
	lastinsert(5);
	lastinsert(10);  
	lastinsert(15);  
	lastinsert(20); 
	printf("\nBefore inserting new node..\n");
	printing();
	insertInMiddle(head,10);
	printf("\n\nBefore inserting new node..\n");
	printing();
}  
