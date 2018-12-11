#include<iostream>
#include"Queue.cpp"

using namespace std;

int main(){
	Queue<int> myQueue;
	cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	myQueue.dequeue();
	myQueue.enqueue(2);
	myQueue.print();
	cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	myQueue.enqueue(1);
	myQueue.print();
	cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	myQueue.enqueue(3);
	myQueue.print();
	cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	myQueue.enqueue(4);
	myQueue.print();
	cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	myQueue.enqueue(5);
	myQueue.print();
	cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	myQueue.enqueue(10);
	myQueue.print();
	cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	myQueue.dequeue();
	myQueue.print();
        cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	myQueue.dequeue();
        myQueue.print();
        cout << "Current Number of elements in Queue : " << myQueue.size() << endl;
	return 0;
}
