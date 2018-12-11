#include<iostream>

using namespace std;

template<class T>
struct Node{
        T data;
        Node<T> * next;
};

template<class T>
class Queue{
	Node<T> * front;
	Node<T> * rear;
	int numOfElems;
	Node<T> * getNewNode(T val);
public :
	Queue():front(nullptr),rear(nullptr),numOfElems(0){}
	~Queue();
	void enqueue(T val);
	T dequeue();
	void print();
	int size(){return numOfElems;}
};
