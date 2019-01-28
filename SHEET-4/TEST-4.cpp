/**
 * SAMPLE-4: Operator overloading
*/
#include <iostream>
using namespace std;

class Time
{
    private:
    int hours,minutes,seconds;
    public:
    Time(){
        hours = minutes = seconds = 0;
    }
    Time(int h, int m ,int s){
        hours = h;
        minutes = m;
        seconds = s;
    }
    void showtime(){
        cout << hours << ":"<<seconds<<endl;
    }
    Time operator + (Time t2){
        Time t3;
        t3.seconds = seconds + t2.seconds;
        t3.minutes = minutes + t2.minutes + t3.seconds/60;
        t3.seconds = t3.seconds%60;
        t3.hours = hours + t2.hours + t3.minutes/60;
        t3.minutes%=60;
        return t3;
    }
};
int main(){
    Time time1(2,34,45),time2(4,38,28),time3;
    time1.showtime();
    time2.showtime();
    time3 = time1+time2;
    time3.showtime();
}
