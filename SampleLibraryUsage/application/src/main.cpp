#include <iostream>
#include <ComplexNumber.hpp>

using namespace std;
using namespace lib;

int main(){
	ComplexNumber aUnCN;
	cout << "Default initialized ComplexNumber : " << endl;
	aUnCN.print();
	ComplexNumber aICN(2,6);
	cout << "Initialized ComplexNumber : " << endl;
	aICN.print();
	return 0;
}
