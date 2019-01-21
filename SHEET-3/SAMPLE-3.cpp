/*
 * SHEET-3
 * SAMPLE PROGRAM-3 : OBJECTS AS ARGUMENTS AND RETURN TYPE
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
    void addTime(Time a,Time b){
        minute = a.minute + b.minute;
        hour = a.hour + b.hour + minute/60;
        minute%=60;
    }
    void showTime(){
        cout << hour << ":"<<minute<<endl;
    }
};
int main()
{
    Time t1(4,7),t2(3,5),t3;
    t3.addTime(t1,t2);
    t3.showTime();
    return 0;
}
