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
	printList();
}
