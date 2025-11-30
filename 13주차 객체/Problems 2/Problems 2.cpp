#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> m;    // key: 정수 값, value: 그 정수가 입력된 개수
    int x;

    // 1) 0이 입력될 때까지 정수 입력, key로 쓰고 중복 개수는 value로 저장
    while (true) {
        cin >> x;
        if (!cin) return 0;   // 입력 오류 시 종료
        if (x == 0) break;    // 0이면 입력 종료

        m[x]++;               // 해당 정수의 개수 증가
    }



    // 2) 입력된 정수의 개수 (총 개수와 서로 다른 정수 개수 둘 다 출력)
    int totalCount = 0;       // 전체 입력된 정수 개수 (중복 포함)
    long long sum = 0;        // 합계(평균 계산용)

    for (auto it = m.begin(); it != m.end(); ++it) {
        int value = it->first;      // 정수 값
        int cnt = it->second;     // 그 정수의 개수

        totalCount += cnt;          // 전체 개수 누적
        sum += 1LL * value * cnt;   // value * 개수 만큼 합에 더함
    }

    cout << "서로 다른 정수 개수 (map 크기): " << m.size() << endl;
    cout << "입력된 정수의 총 개수: " << totalCount << endl;

    // 3) 평균 구하기 
    double avg = (double)sum / totalCount;
    cout << "평균: " << avg << endl;

    // 4) 같은 정수 값이 몇 개 입력되었는지 출력
    cout << "각 정수의 개수:" << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " : " << it->second << "개" << endl;
    }

    return 0;
}