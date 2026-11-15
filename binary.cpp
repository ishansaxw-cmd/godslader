# C++ program to generate binary representation of numbers from 1 to n
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

string toBinary(int num) {
	if (num == 0) return "0";

	string binary;
	while (num > 0) {
		binary = char('0' + (num % 2)) + binary;
		num /= 2;
	}
	return binary;
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n;

	cout << "Binary values from 1 to " << n << ":\n";
	for (int i = 1; i <= n; ++i) {
		cout << i << " -> " << toBinary(i) << '\n';
	}
	return 0;
}



















