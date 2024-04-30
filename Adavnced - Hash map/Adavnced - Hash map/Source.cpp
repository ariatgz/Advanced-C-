#include<iostream>
#include<unordered_map>

using namespace std;

int main() {

	unordered_map<string, int> scores;
	scores.insert({ "Arya",100 });
	scores.insert({ "arta",50 });
	scores.insert({ "sam",10 });
	scores.insert({ "semate",60 });
	scores.insert({ "Joe",1000 });

	for (auto el : scores) {

		cout << el.first << " is a " << el.second << endl;
	}

}