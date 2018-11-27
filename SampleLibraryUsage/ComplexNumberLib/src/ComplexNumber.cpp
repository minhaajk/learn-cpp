#include <iostream>
#include <ComplexNumber.hpp>

using namespace std;

namespace lib{
	ComplexNumber::ComplexNumber(double a,double b):real(a),img(b){}

	ComplexNumber::~ComplexNumber(){}

	void ComplexNumber::print(){
		        cout << real << "+" << img << "i" << endl;
	}
}
