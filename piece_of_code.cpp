#include <iostream>
#include "inout.h"
using namespace std;
int length;
int num;

void read(vector<int>& vec) {
	cout << "Enter size of vector: ";
	cin >> length;
	for (int i = 0; i < length; i++) {
		cout << "Enter number: ";
		cin >> num;
		vec.push_back(num);
	}
}