#include <iostream>
using namespace std;

class Test{
    private:
        int age;
        string name;
    public:
        // Test(){
        //     cout << "Default constructor called";
        // }

        Test(string name = "jay", int age=67){
            name = name;
            age = age;
        }
        
};

int main(){
    Test t;
}
