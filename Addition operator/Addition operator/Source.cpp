#include<iostream>


using namespace std;


class Complex {

private:
	double real{ 0.0 };
	double imag{ 0.0 };

public:

	Complex(double r, double i) : real(r) , imag(i) {};
	Complex(double r) : real(r)  {};

	Complex& operator +=(const Complex& rhs) {

		real += rhs.real;
		imag += rhs.imag;

		return *this; //Returning modified object by value.

	}

	void print() {

		cout << "(" << real << ", " << imag << ")" << endl;
	}


};


Complex operator + (const Complex& lhs,const Complex& rhs) {

	Complex temp{ lhs };

	temp += rhs;

	return temp;

}



int main() {

	Complex c1(1, 2);
	Complex c2(2, 4);

	cout << "C1: ";
	c1.print();
	cout << "C2: ";
	c2.print();

	Complex c3 = c2 + c1;
	cout << "C3: ";
	c3.print();


	c2 += c1;
	cout << "C2: ";
	c2.print();


	Complex c4 = 1 + c3;
	cout << "c4: ";
	c4.print();





}