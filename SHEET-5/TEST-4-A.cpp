/*
* TEST-3: class hierarchy
* along with the extra test modification
* Sagarmatha-BCT
*/

#include<iostream>
using namespace std;

class base{
	public:
		base(){
			cout << "Base Class : Default Contructor" << endl;
		}
		base(int x){
			cout << "Base Class : Parameterized Constructor and value of x is " << x << endl;
		}
		~base(){
			cout << "Base Class : Default Destructor"<<endl;
		}
};
class derived: public base{
	public:
		derived(){
			cout << "Derived Class : Default Construtor" << endl;
		}
		// The solution for the last question . 
		// Acessing parameterized constructor of base through derived class
		derived(int x,int y): base (x){ 
			cout << "Derived Class : Parameterized Constructor and value of y is " << y << endl;
		}
		~derived(){
			cout << "Derived Class : Destructor" << endl;
		}
};

int main()
{
	//modification
	// derived obt1(5); //shows error because no overloaded functions match this
	derived ob1(5,9);//okay.
	// Fun little fact below try running and observing . It is valid
	const derived &that = ob1;
	derived obj(that);
}

