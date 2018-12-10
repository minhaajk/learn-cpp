#include<iostream>
#include"Stack.cpp"

using namespace std;

int main(){
	Stack<int> myStack;
	cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	myStack.pop();
	myStack.push(2);
	myStack.print();
	cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	myStack.push(1);
	myStack.print();
	cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	myStack.push(3);
	myStack.print();
	cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	myStack.push(4);
	myStack.print();
	cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	myStack.push(5);
	myStack.print();
	cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	myStack.push(10);
	myStack.print();
	cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	myStack.pop();
	myStack.print();
        cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	myStack.pop();
        myStack.print();
        cout << "Current Number of elements in Stack : " << myStack.size() << endl;
	return 0;
}
