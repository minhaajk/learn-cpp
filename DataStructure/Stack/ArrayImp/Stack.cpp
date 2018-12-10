#pragma once
#include "Stack.hpp"
/*
template<class T>
Stack<T>::Stack(){
	data = T[max_size];
	top = -1;
	numOfElems = 0;
}

template<class T>
Stack<T>::~Stack(){
	delete [] data;
}*/
template<class T>
void Stack<T>::push(T val){
	if(top >= max_size - 1){
		cout << "Stack Overflow !" << endl;
		return;
	}
	data[++top] = val;
	numOfElems++;
	return;
}

template<class T>
void Stack<T>::pop(){
	if (top == -1){
		cout << "Stack is empty !" << endl;
		return;
	}
	numOfElems--;
	--top;
	return;
}
 
template<class T>
void Stack<T>::print(){
	cout << "Stack from top to bottom :" << endl;
	for (int index = top ; index > -1 ; --index)
		cout << data[index] << endl;
}

