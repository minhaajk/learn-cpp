#pragma once
#include "LinkedList.hpp"

template<class T>
LinkedList<T>::~LinkedList(){
	Node<T> * current = head;
	Node<T> * next = nullptr;
	while(current){
		next = current->next;
		delete current;
		current = next;
	}
	head = nullptr;
}

template<class T>
Node<T> * LinkedList<T>::getNewNode(T data){
	Node<T> *newNode = new Node<T>;
	newNode -> data = data;
	newNode -> next = nullptr;
	return newNode;
}

template<class T>
void LinkedList<T>::insert(T val){
	Node<T> *temp = getNewNode(val);
	if (!head){ 
		head = temp;
		numOfNodes++;
		return;
	}
	Node<T> * current = head;
	while(current->next)
		current = current->next;
	current->next = temp;
	numOfNodes++;
}

template<class T>
void LinkedList<T>::insertAtBeg(T val){
	Node<T> *temp = getNewNode(val);
	if (!head){
		head = temp;
		numOfNodes++;
		return;
	}
	temp->next = head;
	head = temp;
	numOfNodes++;
}

template<class T>
void LinkedList<T>::print(){
	Node<T> * current = head;
	cout << "Current List is : ";
	while(current){
		cout << current -> data << " ";
		current = current -> next;
	}
	cout << endl;
}

