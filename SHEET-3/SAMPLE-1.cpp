/*
 * SHEET-3
 * SAMPLE PROGRAM-1
 * NABIN DHAKAL BCT-022
 */

#include<iostream>
using namespace std;

class Runner{
    private:
    int speed;
    public:
    Runner():speed(0){}
    Runner(int x):speed(x){}
    Runner(Runner &R):speed(R.speed){}
    void speedUp(){
        speed = speed + 10;
    }
    int getSpeed(){
        return speed;
    }
};
int main(int argc, char const *argv[])
{
    Runner R1,R2(5),R3(R2);
    cout << "Speed of Runner 1 = "<<R1.getSpeed()<<endl;
    cout << "Speed of Runner 3 = "<<R3.getSpeed()<<endl;
    R1.speedUp();
    R1.speedUp();
    cout << "Speed of Runner 1 = "<<R1.getSpeed()<<endl;
    R2.speedUp();
    cout << "Speed of Runner 2 = "<<R2.getSpeed()<<endl;
    return 0;
}
