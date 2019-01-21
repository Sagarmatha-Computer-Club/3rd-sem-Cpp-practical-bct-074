/*
 * SHEET-3
 * PROBLEM-1 : area of the room for carpeting
 * NABIN DHAKAL BCT-022
 * Sagarmatha Engineering College
 */
#include<iostream>
using namespace std;

class Floor{
    private:
    int length,breadth,area;
    public:
    Floor():length(0),breadth(0){}
    Floor(int x,int y):length(x),breadth(y){}
    Floor(Floor &R):length(R.length),breadth(R.breadth){}
    int calc_Area(){
        area = length * breadth;
        return area;
    }
    void display_Area(){
        cout << "The area of : " << calc_Area()<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Floor F1,F2(5,6),F3(F2);
    F1.display_Area();
    F2.display_Area();
    F3.display_Area();
    return 0;
}
