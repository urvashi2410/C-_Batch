#include <iostream>
using namespace std;

// Constructors
// 1. same name as of the class name 
// 2. no data type 
// 3. it do not return anything 
// 4. no need to call a constructor 

class Test{
    private:
        int age;
        string name;
    public:

    // Constructor overloading 
        Test(){
            cout << "Default constructor called";
        }
        Test(int age){
            age = age;
            cout << "age is " << age << endl;
        }
        Test(string name){
            name = name;
            cout << "Name is " << name << endl;
        }
        Test(int age, string name){
            age = age;
            name = name;
            cout << "Name is " << name << "Age is " << age << endl;
        }
};

int main(){
    // Test obj;
    // Test obj(34);
    // Test obj("rahul");
    Test obj(34, "rahul");
}

// int student(int ...){
//     return 
// }