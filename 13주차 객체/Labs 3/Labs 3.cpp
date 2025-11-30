#include <iostream>
#include <vector>
using namespace std;

// 사각형 클래스 정의
class Rectangle {
private:
    int width;   // 가로 길이
    int height;  // 세로 길이

public:
    // 생성자
    Rectangle(int w = 0, int h = 0) : width(w), height(h) {}

    // 넓이 구하는 멤버 함수
    int area() const {
        return width * height;
    }

    // 정보 출력 함수
    void print() const {
        cout << "가로: " << width
            << ", 세로: " << height
            << ", 넓이: " << area();
    }
};

int main()
{
    vector<Rectangle> rects;   // 사각형 객체 저장하는 vector

    // 사각형들 추가
    rects.push_back(Rectangle(3, 4));
    rects.push_back(Rectangle(5, 6));
    rects.push_back(Rectangle(10, 2));

    cout << "저장된 사각형 정보:" << endl;

    for (size_t i = 0; i < rects.size(); ++i) {
        cout << i + 1 << "번째 사각형";
        rects[i].print();
        cout << endl;
    }


    return 0;
}