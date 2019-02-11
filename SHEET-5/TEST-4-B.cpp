#include<iostream>
using namespace std;

class base{
	public:
		base(){
			cout << "Base Class : Defult Contructor" << endl;
		}
		base(int x){
			cout << "Base Class : Parameterized Constructor " << x << endl;
		}
		~base(){
			cout << "Base Class : Destructor" << endl;
		}
};
class derived: public base{
	public:
		derived(){
			cout << "Derived Class : Default Construtor" << endl;
		}
		derived(int x,int y){
			cout << "Derived Class : Parameterized Constructor" << y << endl;
		}
		~derived(){
			cout << "Derived Class : Destructonr" << endl;
		}
};
class derived1 : public base,derived{
	public:
		derived1(){
			cout << "Derived1 Class : Default Constructor" << endl;
		}
		derived1(int x, int y){
			cout << "Derived1 Class : Paramiterized Constructor" << endl;
		}
		~derived1(){
			cout << "Derived1 Class : Destructor" << endl;
		}
};

int main()
{
	derived1 ob1(5,9);
}

