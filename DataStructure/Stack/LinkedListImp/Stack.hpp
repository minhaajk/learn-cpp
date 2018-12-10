#include<iostream>

using namespace std;

template<class T>
struct Node{
        T data;
        Node<T> * next;
};

template<class T>
class Stack{
	Node<T> * top;
	int numOfElems;
public :
	Stack():top(nullptr),numOfElems(0){}
	~Stack();
	void push(T val);
	void pop();
	void print();
	int size(){return numOfElems;}
};
