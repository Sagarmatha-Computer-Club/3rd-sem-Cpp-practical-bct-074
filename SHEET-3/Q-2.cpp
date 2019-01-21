/*
 * SHEET-3
 * PROBLEM-2 : observing construction and destruction of object
 * NABIN DHAKAL BCT-022
 * Sagarmatha Engineering College
 */
#include<iostream>
using namespace std;

class Object{
    int number;
    public:
    Object(int x){
        number = x;
        cout << endl<<"Object "<<number << "Created";
    }
    int getNumber(){
        return number;
    }
    ~Object(){
        cout << endl << "Object "<<number<<"Created";
    }
};
int main()
{
    Object Obj1(1),Obj2(2),Ob3(3);
    cout << endl << "Object Number of Ob1 : "<<Ob1.getNumber();
    cout << endl << "Object Number of Ob2 : "<<Ob2.getNumber();
    cout << endl << "Object Number of Ob3 : "<<Ob3.getNumber();
    return 0;
}

