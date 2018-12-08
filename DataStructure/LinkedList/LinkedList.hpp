#include<iostream>

using namespace std;

template<class T>
struct Node{
	T data;
	Node<T> * next;
};

template<class T>
class LinkedList{
	Node<T> *head;
	int numOfNodes;
	Node<T> * getNewNode(T data);
public :
	LinkedList():head(nullptr),numOfNodes(0){}
	~LinkedList();
	void insert(T val);
	void insertAt(T val,int index);
	void insertAtBeg(T val);
	//void remove(T val);
	//void removeAt(int index);
	void removeAtBeg();
	void removeAtEnd();
	void print();
	//void printReverse();
	int size(){return numOfNodes;}
};
