#include <iostream>
using namespace std;

class A{
    public:
        int x;
        void setdata(int x){
            x = x;
        }
        int getData(){
            return x;
        }
    private:
        int y;
    protected:
        int z;
};

class B : public A{
    // x is public 
    // y is private 
    // z is protected 
    void func(){
        cout << z << endl;
    }
};

class C : private A{
    // x is private 
    // y is private (not accessible)
    // z is private 

};

class D : protected A{
    void func(){
        cout << z << endl;
    }
};

int main(){
    // B b;
    // b.setdata(6);
    // b.getData();
    // b.z = 0;

    // C c;
    // c.getData();
    // c.setdata(8);

    // D d;
    // d.setdata(8);
    // d.getter();

    return 0;
}