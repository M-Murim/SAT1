#include <iostream>
using namespace std;

int main() {
	string test = "testing yes";
	string ele = "test";
	if (test.find(ele) == string::npos) {
		cout << "nice" << endl;
	}
	else cout << "not nice" << endl;
}