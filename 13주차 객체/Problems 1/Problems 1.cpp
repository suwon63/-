#include <iostream>
#include <vector>
#include <algorithm>   
#include <numeric>
using namespace std;

int main() {
    vector<int> v1;
    int x;
    for (int i = 1; ; ) {
        cin >> i;
        if (i == 0) break;

        v1.push_back(i);
        //cout << v1.back() << endl;
    }

    cout << "입력된 정수 개수: " << v1.size() << endl;

    int sum = 0;
    for (int n : v1) {
        sum += n;
    }
    double avg = (double)sum / v1.size();
    cout << "평균: " << avg << endl;

    sort(v1.begin(), v1.end());

    cout << "각 정수의 개수:" << endl;
    int current = v1[0];
    int count = 1;

    for (size_t i = 1; i < v1.size(); ++i) {
        if (v1[i] == current) {
            // 같은 값이면 개수 증가
            count++;
        }
        else {
            // 다른 값이 나오면 지금까지의 값과 개수 출력
            cout << current << " : " << count << "개" << endl;
            current = v1[i];
            count = 1;
        }
    }
    // 마지막 값 출력
    cout << current << " : " << count << "개" << endl;

    return 0;
}
