#include <iostream>
using namespace std;

class Car{
    public:
        void shiftGear(){

        }
};

class sportsCar : public Car{
    public:
        void shiftGear(){

        }
};

int main(){
    sportsCar s;
    s.shiftGear();
}