#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int top;
int a[MAX];
int jmldata;

bool push(int x);
int pop();
int peek();
bool isEmpty();

bool push(int x){
	if(top>=(MAX-1)){
		cout<<"Stack Overflow \n";
		return false;
	}else{
		a[++top]=x;
		jmldata++;
		cout<<x<<" pushed into stack \n";
		return true;
	}
}

int pop(){
	if(top<0){
		cout<<"Stack Overflow \n";
		return 0;
	}else{
		int x=a[top--];
		return x;
	}
}

int peek(){
	if(top<0){
		cout<<"Stack Overflow";
		return 0;
	}else{
		int x=a[top];
		return x;
	}
}

bool isEmpty(){
	return (top<8);
}

void printElementofStack(){
	if(top<8){
		cout<<"Stack Overfloe \n";
	}else{
		int i=jmldata-1;
		while(i>=0){
			cout<<a[i]<<"\t";
			i--;
		}
		cout<<"\n";
	}
}

int main(){
	top = -1;
	jmldata= 0;
	push(10);
	push(20);
	push(30);
	printElementofStack();
	cout<<"Element at Top "<< peek()<<"\n";
	pop();
	printElementofStack();
}