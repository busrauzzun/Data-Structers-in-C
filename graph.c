#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node *heads[5]={NULL};

struct node*addedge(struct node *heads[],int key){
	struct node*temp,*last;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=key;
	temp->next=NULL;
	
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=temp;
	return heads;
}

void print(struct node*heads[]){
	int i;
    for(i=0;i<5;i++){
    	struct node *temp=heads[i];
    	while(temp!=NULL){
    		printf("%d",temp->data);
    		temp=temp->next;
		}
	}
}

int main(int argc, char *argv[]) {
	
		heads[0]=addedge(heads[0],1);
		heads[0]=addedge(heads[0],2);
		heads[1]=addedge(heads[1],2);
	    heads[1]=addedge(heads[1],3);
	    heads[1]=addedge(heads[1],5);
	    heads[2]=addedge(heads[2],3);
	    heads[2]=addedge(heads[2],5);
	    heads[2]=addedge(heads[2],4);
		heads[3]=addedge(heads[3],4);
		heads[3]=addedge(heads[3],5);
		heads[4]=addedge(heads[4],5);
		heads[4]=addedge(heads[4],1);
		heads[4]=addedge(heads[4],4);
		
		print(heads);
		
return 0;
}
