# -
객체지향 프로그래밍 실습 코드 올리는 곳 

실습 시간 코드 
1. 탈 것 부모 클래스 코드

        #include <iostream>
        using namespace std;
        
        class Vehicle
        {
        private:
            int person = 0;    // 탑승인원
            int baggage = 0;   // 화물 무게
        public:
            void ride()  // 탑승
            {
                person++;
            }
            void load(int weight) // 짐 싣기
            {
                baggage += weight;
            }
            void getOff() // 하차
            {
                person--;
            }
            int getPerson()  // 탑승인원 확인
            {
                return person;
            }
            int getBaggage() // 화물 무게 확인
            {
                return baggage;
            }
        };
        
        class Cruise :public Vehicle
        {
        private:
            int room;
        public:
            void setRoom(int roomCount)  
            {
        
            }
            void countPerson()
            {
                cout << "Cruise person: " << Vehicle::getPerson() << endl;
            }
            void countBaggage()
            {
                cout << "Cruise baggage: " << Vehicle::getBaggage() << endl;
            }
        };
        
        class AirPlane :public Vehicle
        {
        private:
            int seat;
        public:
            void setSeat(int seatCount)
            {
        
            }
            void countPerson()
            {
                cout << "Airplane person: " << Vehicle::getPerson() << endl;
            }
            void countBaggage()
            {
                cout << "Airplane baggage: " << Vehicle::getBaggage() << endl;
            }
        };
    
        int main(int argc, char const* argv[])
        {
            Cruise dolphin;
            dolphin.ride();
            dolphin.load(10);
            dolphin.countPerson();
            dolphin.countBaggage();
        
            AirPlane cppAir;
            cppAir.ride();
            cppAir.load(20);
            cppAir.countPerson();
            cppAir.countBaggage();
        }

2. 다중 상속 코드
     
          #include <iostream>
        using namespace std;
   
        class Teacher {
        public:
            void teach() {
                cout << "강의를 하고 있습니다." << endl;
            }
        };
        
        class Researcher {
        public:
            void research() {
                cout << "연구를 하고 있습니다." << endl;
            }
        };
        
        // 다중 상속
        class Professor : public Teacher, public Researcher {
        public:
            void introduce() {
                cout << "저는 교수입니다." << endl;
            }
        };
        
        int main() {
            Professor p;
            p.introduce();
            p.teach();
            p.research();
            return 0;
       }    

3. 함수 오버라딩 코드
       
         #include <iostream>
        using namespace std;
        class Animal {
        public:
            virtual void speak() {  // virtual로 선언
                cout << "동물이 소리를 냅니다." << endl;
            }
        };
        
        class Dog : public Animal {
        public:
            void speak() override {  // 부모의 virtual 함수 재정의
                cout << "멍멍!" << endl;
            }
        };
        
        class Cat : public Animal {
        public:
            void speak() override {  // 부모의 virtual 함수 재정의
                cout << "야옹!" << endl;
            }
        };
        
        int main() {
            Animal a1;
            Dog a2;
            Cat a3;
    
        a1.speak();  // "동물이 소리를 냅니다."
        a2.speak();  // "멍멍!"
        a3.speak();  // "야옹!"
    
        return 0;
        }

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
