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
    void display() {
	 temp = head;
		while(temp != NULL) {
		printf("%d-",temp->data);
		temp = temp -> next;
		}
	}
	void deletion(struct node* head, int x) {
		temp = head;
		struct node* prev;
		while(temp != NULL && temp -> data != x) {
			prev = temp;
			temp = temp -> next;
		}
		temp = head;
		while(temp != NULL && temp -> data != x) {
			temp = temp->next;
		}
		prev -> next = temp -> next;
		free(temp);
	}
main ()  
{  
	lastinsert(5);
	lastinsert(10);  
	lastinsert(15);  
	lastinsert(20);  
	lastinsert(25);
	printf("\nBefore Deletion Node....\n");
	display();
	printf("\n\nBefore Deletion Node....\n");
	deletion(head,15); //Node to be deleted..
	display();
}  
