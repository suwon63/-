# -
객체지향 프로그래밍 실습 코드 올리는 곳 

과제 외 코드 
다중 상속과 함수 오버라이딩을 사용한 다형성 코드

    #include <iostream>
    using namespace std;
    
    class Person {
    public:
        virtual void work() {
            cout << "사람이 무언가 일을 합니다." << endl;
        }
    };
    
    class Student : public Person {
    public:
        void work() override {
            cout << "학생이 공부를 합니다." << endl;
        }
    };
    
    class PartTimer : public Person {
    public:
        void work() override {
            cout << "알바생이 일을 합니다." << endl;
        }
    };
    
    // 다중 상속
    class WorkingStudent : public Student, public PartTimer {
    public:
        void work() override {
            cout << "저는 공부도 하고 알바도 하는 대학생입니다." << endl;
        }
    };
    
    int main() {
        Person* p1 = new Student();
        Person* p2 = new PartTimer();
    
        p1->work();  // "학생이 공부를 합니다."
        p2->work();  // "알바생이 일을 합니다."
    
        WorkingStudent ws;
        ws.work();   // "저는 공부도 하고 알바도 하는 대학생입니다."
    
        return 0;
    }
