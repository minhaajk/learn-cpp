#include<iostream>
#include"LinkedList.cpp"

using namespace std;

int main(){
	LinkedList<int> mylist;
	cout << "Current Number of elements in List : " << mylist.size() << endl;
	mylist.removeAtBeg();
	mylist.insert(2);
	mylist.print();
	cout << "Current Number of elements in List : " << mylist.size() << endl;
	mylist.insertAtBeg(1);
	mylist.print();
	cout << "Current Number of elements in List : " << mylist.size() << endl;
	mylist.insert(3);
	mylist.print();
	cout << "Current Number of elements in List : " << mylist.size() << endl;
	mylist.insertAt(4,1);
	mylist.print();
	cout << "Current Number of elements in List : " << mylist.size() << endl;
	mylist.insertAt(5,5);
	mylist.print();
	cout << "Current Number of elements in List : " << mylist.size() << endl;
	mylist.insertAt(10,10);
	mylist.print();
	cout << "Current Number of elements in List : " << mylist.size() << endl;
	mylist.removeAtBeg();
	mylist.print();
        cout << "Current Number of elements in List : " << mylist.size() << endl;
	mylist.removeAtEnd();
        mylist.print();
        cout << "Current Number of elements in List : " << mylist.size() << endl;
	return 0;
}
