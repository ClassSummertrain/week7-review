#include<stdio.h>
struct Deque{
	int a[20];
	int head;//第一个元素的下标 
	int tail;//将要插入元素的下标 
};
void insert_head(struct Dequeue *q,int n){
	if((q->tail+1)==q->head){
		printf("Queue has no room!\n");
		return;
	}
	q->head = (q->head-1)%20;
	q->a[q->head] = n;
}
void insert_tail(struct Dequeue *q,int n){
	f((q->tail+1)==q->head){
		printf("Queue has no room!\n");
		return;
	}
	q->tail = (q->tail+1)%20;
	q->a[q->tail] = n;
}
int delete_head(struct Dequeue *q){
	if(q->head == q->tail){
		printf("Queue has no node!\n");
		return -1;
	}
	int n = q->a[q->head];
	q->head = (q->head+1)%20;
	return n;
}
int delete_tail(struct Dequeue *q){
	if(q->head == q->tail){
		printf("Queue has no node!\n");
		return -1;
	}
	int n = q->a[q->tail];
	q->tail = (q->tail-1)%20;
	return n;
}
int main(){
	struct Dequeue q;
	insert_tail(&q,1);
	insert_tail(&q,2);
	delete_head(&q);
	insert_head(&q,3);
	return 0;
} 