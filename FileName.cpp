#include <iostream>
#include <string>;

using namespace std;


int main() {

	int a, b,res;
	char c;


	cout << " Type number 1 ";
	cin >> a;
	cout << " Type number 2 ";
	cin >> b;

	cout << "Choose action:" << " * " << " " << " / " << " " << " + " << " " << " - " << endl;
	cin >> c;

	if (c == '+') {
		res = a + b;
		cout << "Result: " << " " << res << endl;
	}
	else if (c == '-') {
		res = a - b;
		cout << "Result: " << " " << res << endl;
	}
	else if (c == '*') {
		res = a * b;
		cout << "Result: " << " " << res << endl;
	}
	else if (c == '/') {
		res = a / b;
		cout << "Result: " << " " << res << endl;
	}
	else {
		cout << "Error";
	}


	return 0;
}
