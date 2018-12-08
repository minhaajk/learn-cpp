#include<iostream>

using namespace std;

const int max_size = 50;

template<class T>
class Stack{
	T data[max_size];
	int numOfElems;
	int top;
public :
	Stack():numOfElems(0),top(-1){}
	~Stack(){}
	void push(T val);
	void pop();
	void print();
	int size(){return numOfElems;}
};
