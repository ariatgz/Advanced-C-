#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;
using namespace std::literals; //for suffixes

void func(seconds sec) {

	cout << sec.count() << " seconds\n";
}

int main() {

	seconds s;
	cout << "uninitialized seconds is " << s.count() << endl;

	auto hour = 5h;
	auto mins = 10min;
	auto sec = 2s;
	auto msec = 20ms;
	auto usec = 50us;
	auto nsec = 80ns;


	cout << "Hour = " << hour.count() << endl;
	auto mySec = msec + 5s;
	cout << " mySec = " << mySec.count() << endl;

	func(8s);


	seconds s2 = 1h;

	//to convert despite the data loss.
	seconds s3 = duration_cast<seconds>(5043ms); 
}
