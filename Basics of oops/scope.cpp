#include <iostream>

using namespace std;

class Test{
    // Access specifier
    // public, private protected  
    // public = accessible everywhere

    public:
        static int rollNo;
        static string name;

        // declaration 
        void introduce();
};

int Test::rollNo = 34;
string Test::name = "Manav";

// scope resolution operator 
// define 
void Test::introduce(){
    cout << "Hello my name is " << name << endl;
    cout << "Your roll numner is " << rollNo << endl;
}

int main(){
    // stack 
    // Test obj;
    // obj.rollNo = 55;
    // obj.name = "Jay";
    // obj.introduce();

    // dynamic memory allocation (heap)
    // Test *obj = new Test();
    // obj->rollNo = 55;
    // obj->name = "Jay";
    // // calling 
    // obj->introduce();

    // delete obj;

}