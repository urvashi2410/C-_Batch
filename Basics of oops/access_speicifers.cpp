#include <iostream>
using namespace std;

class Test{
    // private = accessible only inside the class 
    private:
        int age;

        int realAge(){
            return age - 5;
        }

    public:
        // setter = to set some value of the private data 
        void setAge(int value){
            age = value;
        }

        // getter = to get some value of the private data 
        int getAge(){
            return age;
        }

        void display(){
            cout << "Age is " << realAge() << endl;
        }
};

int main(){
    Test obj;
    // obj.age = 34;
    obj.setAge(23);
    cout << obj.getAge() << endl;
    // obj.display();
}

// encapsulation = hiding of the personal data which you want to hide from the user 