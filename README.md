# -
객체지향 프로그래밍 실습 코드 올리는 곳 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int prevCap = v.capacity();

    cout << "size\tcapacity\n";

    for (int i = 1; i <= 100; ++i) {
        v.push_back(i);

        if (v.capacity() != prevCap) {
            cout << v.size() << "\t" << v.capacity() << endl;
            prevCap = v.capacity();
        }
    }
}
