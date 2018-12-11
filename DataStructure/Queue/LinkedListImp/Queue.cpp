#pragma once
#include "Queue.hpp"

template<class T>
Queue<T>::~Queue(){
	Node<T> * current = front;
        Node<T> * next = nullptr;
	while(current){
		next = current->next;
		delete current;
		current = next;
	}
	front = rear = nullptr;
}

template<class T>
Node<T> * Queue<T>::getNewNode(T val){
	Node<T> *newNode = new Node<T>;
	newNode -> data = val;
	newNode -> next = nullptr;
	return newNode;
}


template<class T>
void Queue<T>::enqueue(T val){
	Node<T> * newNode = getNewNode(val);
	if (!front and !rear){
		front = rear = newNode;
		numOfElems++;
		return;
	}
	else{
		rear -> next = newNode;
		rear = newNode;
		numOfElems++;
		return;
	}

}

template<class T>
T Queue<T>::dequeue(){
	T data;
	Node<T> * current = front;
	if (!front and !rear){
		cout << "Queue is empty !" << endl;
		return data;
	}
	else if (front == rear){
		data = front -> data;
		front = rear = nullptr;
		numOfElems--;
	}
	else{
		data = front -> data;
		front = front -> next;
		numOfElems--;
	}
	delete current;
	return data;
}
 
template<class T>
void Queue<T>::print(){
	cout << "Queue from front to rear :" << endl;
	Node<T> * temp = front;
	while(temp){
		cout << temp -> data << endl;
		temp = temp -> next;
	}
}

