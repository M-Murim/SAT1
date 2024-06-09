#include <iostream>
using namespace std;

int main(void) {
	string test = "Hum/Sci", ele = "Hum";
	if (test.find(ele) != string::npos) {
		cout << "nice" << endl;
	}
	else cout << "not nice" << endl;
	return 0;
}

// it works, nice