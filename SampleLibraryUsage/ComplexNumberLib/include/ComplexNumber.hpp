#include<iostream>

using namespace std;

namespace lib{
	class ComplexNumber{
		double real,img;
	public:
		ComplexNumber(double a=0, double b=0);
		~ComplexNumber();
		void print();
	};
}
