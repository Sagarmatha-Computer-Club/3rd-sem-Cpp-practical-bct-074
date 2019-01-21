/*
 * SHEET-3
 * SAMPLE PROGRAM-2 : DESTRUCTOR: 
 * --OBJECTS ARE DESTROYED IN REVERSE ORDER OF THEIR
 * NABIN DHAKAL BCT-022
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
    Object Ob1(1),Ob2(2),Ob3(3);
    cout << endl << "Object Number of Ob1 : "<<Ob1.getNumber();
    cout << endl << "Object Number of Ob2 : "<<Ob2.getNumber();
    cout << endl << "Object Number of Ob3 : "<<Ob3.getNumber();
    return 0;
}
void function1(){
    Object Obj3;
}
