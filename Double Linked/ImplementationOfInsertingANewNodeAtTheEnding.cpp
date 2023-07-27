#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct tnode{
	int data;
	struct tnode *prev;
	struct tnode *next;
};

tnode *head, *tail, *entry, *del, *cur;

void createSLL(int data){
	head = (struct tnode*) malloc(sizeof(struct tnode));
	head->data= data;
	head->prev=NULL;
	head->next=NULL;
	tail=head;
}

void addFirst(int data){
	if (head ==NULL){
		cout<<"Silahkan Create DSL Dahulu"<<endl;
	}else{
		entry = (struct tnode*) malloc(sizeof(struct tnode));
		entry->data=data;
		entry->prev=NULL;
		entry->next=head;
		head->prev=entry;
		head = entry;
	}
}
void addLast(int data){
	if (head == NULL){
	cout<<"Silahkan Create DSL Dahulu"<<endl;
} else{entry = (struct tnode*) malloc(sizeof(struct tnode));
		entry->data=data;
		entry->prev=tail;
		entry->next=NULL;
		head->next=entry;
		tail = entry;
}
}
void printList(){
	cout<<endl<<"===== Print Member Of List ====="<<endl;
	bool last=false;
	cur=head;
	while (!last){
		if(cur == tail){
			last=true;
		}
		cout<<cur->data<<endl;
		cur = cur->next;
	}
}
int main(){
	createSLL(7);
	addFirst(67);
	addFirst(98);
	printList();
	addLast(48);
	addLast(23);
	printList();
}
