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
void LinkedList<T>::insertAt(T val, int index){
	if(index > numOfNodes){
		cout << "Index is more than the number of nodes in the list" << endl;
		return;
	}
	Node<T> *newNode = getNewNode(val);
	if (index == 1){
		newNode -> next = head;
		head = newNode;
		numOfNodes++;
		return;
	}
	Node<T> *current = head;
	for(int i = 0; i < index - 2;i++)
		current = current -> next;
	newNode -> next = current -> next;
	current -> next = newNode;
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
void LinkedList<T>::removeAtBeg(){
	if(!head){
		cout << "List is empty." << endl;
		return;
	}
	Node<T> *temp = head;
	head = head -> next;
	numOfNodes--;
	delete temp;
	return;
}

template<class T>
void LinkedList<T>::removeAtEnd(){
	if(!head){
                cout << "List is empty." << endl;
                return;
        }
	Node<T> *current = head;
	Node<T> *prev = nullptr;
	while(current->next){
		prev = current;
		current = current -> next;
	}
	prev -> next = current -> next;
	delete current;
	numOfNodes--;
	return;
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

