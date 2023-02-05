#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node {
	int data;
	struct node *next;
};


   struct node* insertFirst(struct node **head,int key){
	if(head==NULL){
		struct node *head=(struct node*)malloc(sizeof(struct node));
		head->data=key;
		head->next=NULL;
	}
	else{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->data=key;
		temp->next=*head;
		*head=temp;
	}
	
	return *head;
	
}


void print(struct node*head){
	while(head!=NULL){
		printf("%4d",head->data);
		head=head->next;
	}
}


struct node* bubblesort(struct node **head){
	int p;
	struct node *p;
	while(head!=NULL){
		while(temp!=NULL){
			if(temp->data>temp->next->data){
				temp1=temp->data;
				temp->data=temp->next->data;
				temp->data=p;
				temp=temp->next;
			}
			head=head->next;
		}
	}
		
	return head;
}


int main() {
	srand(time(NULL));
	
	struct node *head;
	int i;
	for(i=0;i<100;i++){
		int rastgele=rand()%1000+1;
		insertFirst(&head,rastgele);
	}
	print(head);
	
	print("--------------------------\n");
	
	bubblesort(&head);
	
	print(&head);

	return 0;
}





