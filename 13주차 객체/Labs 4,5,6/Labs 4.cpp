#include <vector>
#include <iostream>
using namespace std;

int main()
{
	vector<int> v1(5);
	v1.push_back(3);
	v1[0] = 10;

	cout << "v1 = ";
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	return 0;
}