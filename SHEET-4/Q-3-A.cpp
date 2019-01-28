/* PROBLEM-3
 * operator overloading
 * complex number arithmatic *
 * sagarmatha-BCT-074-022
 */
 
#include <iostream>
using namespace std;

class Complex{
	int real , imag;
	public:
	Complex(){
		real = 0;
		imag = 0;
	}
	Complex(int x,int y){
		real = x;
		imag = y;
	}
	void display(){
		cout << "The complex number is: " << real << "+" << imag << "i" <<endl;
	}
	Complex operator * (Complex c2){
		Complex ans;
		int F,I,L,O;
		F = real * c2.real;
		O = real * c2.imag;
		I = imag * c2.real;
		L = imag * c2.imag * -1;
		ans.real = F + L;
		ans.imag = O + I;
		return ans;
	}
};
int main(){
	Complex c1(5,2),c2(4,3),c3;
	cout << "Displaying c1 and c2..."<<endl;
	c1.display();
	c2.display();
	c3 = c1 * c2;
	cout << "Displaying c3..."<<endl;
	c3.display();	
};
