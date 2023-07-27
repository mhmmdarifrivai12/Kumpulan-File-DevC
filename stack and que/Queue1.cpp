#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 100

int front, rear, count, capacity;
int array[SIZE];

void dequeue();
void enqueue(int item);
int peek();
int size();
bool isEmpty();
bool isFull();
void intit();
void printQueue();

void dequeue(){
	if (isEmpty()){
		cout<<"Underflow \n Program Terminated \n";
		exit(EXIT_FAILURE);
	}
	cout<<"Removing "<<array[front]<<endl;
	front = (front + 1);
	count--;
}

void enqueue(int item){
	if(isFull()){
		cout<<"Overflow \n Program Terminated \n";
		exit(EXIT_FAILURE);
	}
	cout<<"Inserting "<<item<<endl;
	rear = (rear+1);
	array[rear]=item;
	count++;
}

int peek(){
	if(isEmpty()){
		cout<<"Underflow \n Program Terminated \n";
		exit(EXIT_FAILURE);
	}
	return array[front];
}

int size(){
	return count;
}

bool isEmpty(){
	return(size()==0);
}

bool isFull(){
	return(size()==capacity);
}

void init(){
	capacity=SIZE;
	front=0;
	rear=-1;
	count=0;
}

void printQueue(){
	for(int i=front;i<=rear;i++){
		cout<<"Data	: "<<array[i]<<endl;
	}
	cout<<endl;
}

int main(){
	init();
	enqueue(10);
	printQueue();
	enqueue(30);
	enqueue(35);
	printQueue();
	dequeue();
	dequeue();
	printQueue();
}