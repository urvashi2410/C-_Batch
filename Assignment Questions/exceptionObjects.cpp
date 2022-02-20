#include <iostream>
using namespace std;

// abstract class
class Out_of_range{
    public:
        virtual void getException() = 0;
};

class HoursException : public Out_of_range{
    public:
        void getException(){
            cout << "Hours are negative" << endl;
        }
};

class MinutesException : public Out_of_range{
    public:
        void getException(){
            cout << "minutes are less than 0 or greater than 59" << endl;
        }
};

class SecondsException : public Out_of_range{
    public:
        void getException(){
            cout << "seconds are less than 0 or greater than 59" << endl;
        }
};

long long ToSeconds(int hours, int minutes, int seconds){
    long long ans = hours*3600 + minutes*60 + seconds;
    return ans;
}

int main(){
    int hours;
    cin >> hours;
    int minutes;
    cin >> minutes;
    int seconds;
    cin >> seconds;

    long long time = ToSeconds(hours, minutes, seconds);
    
    HoursException *h = new HoursException();
    MinutesException *m = new MinutesException();
    SecondsException *s = new SecondsException();

    try{
        if(hours < 0){
            throw h;
        }
        if(minutes < 0 || minutes > 59){
            throw m;
        }
        if(seconds < 0 || seconds > 59){
            throw s;
        }
    }
    catch(HoursException *h){
        h->getException();
    }
    catch(MinutesException *m){
        m->getException();
    }
    catch(SecondsException *s){
        s->getException();
    }

    return 0;
}