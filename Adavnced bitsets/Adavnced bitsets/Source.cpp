#include<iostream>
#include<bitset>


using namespace std;

int main() {

	bitset<8> byte1{ "11010111" };
	bitset<8> byte2{ 85 };
	bitset<8> byte3{ 0b101'01101 };

	cout << "b1 is " << byte1 << endl;
	cout << "b2 in decimal is " << byte2.to_ulong() << endl;
	cout << "b2 as a string is " << byte2.to_string() << endl;
	cout << "b3 is " << byte3 << endl;

	cout << "b1 has a size of " << byte1.size() << endl;

	cout << "The bits of b1 are: ";
	
	try {
		cout << "b1 bit " << 8 << " = " << byte1.test(8) << endl;

	}
	catch (exception& e) {
		cout << "caught exception: " << e.what() << endl;
	}


	byte1.set();

	cout << byte1 << endl;
	//byte1.set(0) set bit 0 to true
	//byte1.set(0,false) set bit 0 to false

	byte2.reset(); //set all bits to false
	cout << byte2 << endl;

	//byte2.flip() inverts all bits.


}
