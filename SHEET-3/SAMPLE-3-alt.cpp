/*
 * SHEET-3
 * SAMPLE PROGRAM-3 : OBJECTS AS ARGUMENTS AND RETURN TYPE (Alternate version)
 * NABIN DHAKAL BCT-022
 */

#include<iostream>
using namespace std;

class Time{
    int hour,minute;
    public:
    Time(int x =0,int y= 0){
        hour = x;
        minute = y;
    }
    Time addTime(Time a){ // The alternate portion . Time returned...
        Time b;
        b.minute = a.minute + minute;
        b.hour = a.hour + hour + b.minute/60;
        b.minute%=60;
        return b;
    }
    void showTime(){
        cout << hour << ":"<<minute<<endl;
    }
};
int main()
{
    Time t1(4,7),t2(3,5),t3;
    t3=t1.addTime(t2);
    t3.showTime();
    return 0;
}
