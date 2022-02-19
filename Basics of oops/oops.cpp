// functions 

// int name(int ){

// }

// oops 

// class name{

//     int test(){

//     }
// }

// objects 


// class college 

// variables / attributes 
// hair color
// eye color 
// height
// weight 

// methods / functions
// sleep 
// walk
// run

#include <iostream>

using namespace std;

class Test{
    // Access specifier = how to access the data inside a class 
    // public, private, protected  

    // public = accessible everywhere 
    public:
        int rollNo;
        string name;

        void introduce(){
            cout << "Hello my name is " << name << endl;
            cout << "Your roll numner is " << rollNo << endl;
        }
};

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
    // obj->introduce();

    // delete obj;

}

// data structure = linked list = -> 