#include <iostream>
using namespace std;

// Abstract class = jisme kam se kam ek purely virtual function hota hai 
class Interest{
    public:
        // purely virtual 
        virtual void InterestCalculator() = 0;
        void f1(){

        }
};

class SImple : public Interest{
    public:
        void InterestCalculator(){
            cout << " adhjasdhsajfhja";
        }
        void f1(){

        }
};

class Compound : public Interest{
    public:
        void InterestCalculator(){
            cout << "sfsfssf" << endl;
        }
};

int main(){
    // Interest t;
    SImple s;
    s.f1();
}