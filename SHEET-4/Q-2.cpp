/* PROBLEM-2
 * friend funcion
 * sagarmatha-BCT-074-022
 */
 
#include <iostream>
using namespace std;

class B;// forward declaration is the key
class A {
    private:
      int a;
    public:
      A(): a(123) { }
      friend int add(A, B); //friend function
};

class B {
    private:
       int b;
    public:
       B(): b(321) { }
       friend int add(A , B); // friend function
};

// Function add() is the friend function of classes A and B
// that can the member variables A and B
int add(A objA, B objB)
{
   return (objA.a + objB.b);
}

int main()
{
    A objA;
    B objB;
    cout<<"Sum: "<< add(objA, objB);
    return 0;
}
