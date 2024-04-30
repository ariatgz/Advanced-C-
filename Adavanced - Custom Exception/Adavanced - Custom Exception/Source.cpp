#include<vector>
#include<string>
#include<iostream>

using namespace std;


template<class T>
T at(const vector<T>& v, int p) {


	if (v.size() < p + 1) {

		string s{ "No element at index " + to_string(p) };
		throw std::out_of_range(s);

	}

	return v[p];


}


class bad_student_grade : public std::out_of_range {

public:

	bad_student_grade() : std::out_of_range("Invalid grade") {};
	bad_student_grade(const string& s) : std::out_of_range(s) {};
	bad_student_grade(const char* s) : std::out_of_range(s){}


	/*const char* what() const noexcept override {

		return "Error is" ;
	}*/

};

int main() {


	vector<int> vec1{1,2,3,4,5};
	vector<int> vec2;

	try
	{

		cout << at(vec1, 3) << endl;

		cout << at(vec2, 2) << endl;

	}
	catch (const std::out_of_range& e)
	{
		cout << e.what() << endl;
	}



}