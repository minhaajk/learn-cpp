#pragma once
#include "Stack.hpp"

template<class T>
Stack<T>::~Stack(){
	Node<T> * current = top;
        Node<T> * next = nullptr;
	while(current){
		next = current->next;
		delete current;
		current = next;
	}
	top = nullptr;
}

template<class T>
void Stack<T>::push(T val){
	Node<T> * newNode = new Node<T>();
	newNode -> data = val;
	newNode -> next = top;
	top = newNode;
	numOfElems++;
	return;
}

template<class T>
void Stack<T>::pop(){
	if (!top){
		cout << "Stack is empty !" << endl;
		return;
	}
	Node<T> * temp = top;
	top = top -> next;
	delete temp;
	numOfElems--;
	return;
}
 
template<class T>
void Stack<T>::print(){
	cout << "Stack from top to bottom :" << endl;
	Node<T> * temp = top;
	while(temp){
		cout << temp -> data << endl;
		temp = temp -> next;
	}
}

