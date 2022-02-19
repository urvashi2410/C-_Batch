#include <iostream>
using namespace std;

class Time{
    private:
        int hours;
        int minutes;
        int seconds;

    public:
        Time(){
            hours = 0;
            minutes = 0;
            seconds = 0;
        }

        void advance(int h, int m, int s){
            seconds += s;
            minutes += m;
            hours += h;
            if(seconds >= 60){
                minutes++;
                seconds = 0;
            }

            if(minutes >= 60){
                hours++;
                minutes = 0;
            }
        }

        void reset(int h, int m, int s){
            hours = h;
            minutes = m;
            seconds = s;
        }

        void print(){
            cout << "Current time is " << hours <<":"<< minutes << ":" << seconds << endl;
        }
};

int main(){
    Time t;
    // t.advance(2, 59, 60);
    t.reset(4,4,4);
    t.print();
}