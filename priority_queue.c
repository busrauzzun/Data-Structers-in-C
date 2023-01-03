#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 20

struct priority_queue {
    int A[QUEUE_SIZE+1];
    int cnt;
};

typedef struct priority_queue pqueue;

void initialize(pqueue *p){
    p->cnt=0;
}

void inserttoMinHeap(pqueue *p,int key){
    if(p->cnt==QUEUE_SIZE){
        printf("Queue is full ");
    }
    else{
        p->cnt++;
        p->A[p->cnt]=key;
        int iter=p->cnt;
        while (iter!=1 && p->A[iter]<p->A[iter/2])
        {
            int temp=p->A[iter];
            p->A[iter]=p->A[iter/2];
            p->A[iter/2]=temp;
            iter=iter/2;
        }
        
    }
}

int deletetoMinHeap(pqueue *p){
    if(p->cnt==0){
        printf("Queue is empty");
        return -100;
    }
    else{
        int min=p->A[1];
        p->A[1]=p->A[p->cnt];
        p->cnt--;
        int i=1;
        while(2*i<=p->cnt && (p->A[i]>p->A[i*2]) || (p->A[i]>p->A[i*2+1])){
            if(p->A[2*i]<p->A[2*i+1]){
                int temp=p->A[2*i];
                p->A[i]=p->A[2*i];
                p->A[2*i]=temp;
                i=2*i;
            }
            else{
                int temp=p->A[2*i+1];
                p->A[i]=p->A[2*i+1];
                p->A[2*i+1]=temp;
                i=2*i+1;
            }
        }
        return min;

    }
    
}

void print(pqueue *p){
	if(p->cnt==0)
		printf("Queue is empty");
	else{
		int i;
		for(i=1;i<=p->cnt;i++){
			printf("%5d",p->A[i]);
		}
	}	
}

int main(int argc, char *argv[]){
    pqueue *p;
	
	initialize(&p);
	inserttoMinHeap(&p,6);
	inserttoMinHeap(&p,12);
	inserttoMinHeap(&p,15);
	inserttoMinHeap(&p,11);
	inserttoMinHeap(&p,30);
	inserttoMinHeap(&p,25);

	
	print(&p);
	
	deletetoMinHeap(&p);
    printf("\n");
	
	printf("--------------");
    printf("\n");
    print(&p);
	

	return 0;
}
