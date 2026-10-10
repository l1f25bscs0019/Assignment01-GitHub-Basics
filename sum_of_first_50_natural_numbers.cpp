#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	for (int i = 1; i <= 50; i++) {
		sum += i;
	}
	cout << "sum of first 50 natural numbers are : " << sum << endl;
	return 0;
}