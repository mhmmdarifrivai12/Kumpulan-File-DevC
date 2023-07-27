#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

struct tnode{
int data;
struct tnode *next;
struct tnode *prev;
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
if (head == NULL){
cout<<"Silahkan create dsl dshulu"<<endl;
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
cout<<"Silahkan create dsl dshulu"<<endl;
}else{
entry = (struct tnode*) malloc(sizeof(struct tnode));
entry->data=data;
entry->prev=NULL;
entry->next=head;
head->prev=entry;
head = entry;
}
}

void removeFirst(){
int temp;
if(head == NULL){
cout<<"List kosong"<<endl;
}else{
temp=head->data;
del= head;
head=head->next;
head->prev=NULL;
free(del);
cout<<"Data"<<temp<<"telah dihapus"<<endl;
}
}

void removelast(){
int temp;
if (head == NULL){
cout<<"List kosong"<<endl;
}else if(head==tail){
del=head;
free(del);
}else{
cur=head;
while(cur->next != tail){
cur = cur->next;
}
temp = tail->data;
del=tail;
cur->next=NULL;
tail=cur;
free(del);
cout<<"Data"<<temp<<"telah dihapus"<<endl;
}
}


void printList(){
cout<<endl<<"===== Print Members of List ====="<<endl;
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
removeFirst();
printList();
removelast();
printList();
}



