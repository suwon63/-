#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector<int> a = { 1,2,3 };
	vector<int> b = { 10,20 };

	swap(a, b);

	cout << "Vector a: ";
	for (int n : a) {
		cout << n << ' ';
	}
	cout << "\nVector b: ";
	for (int n : b) {
		cout << n << ' ';
	}
}