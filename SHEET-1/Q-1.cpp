#include <iostream>

using namespace std;
class calc
{
	float num1,num2;
	float product;

public:
	void input(){
		cout << "Enter first number:";
		cin >> num1;
		cout << "Enter second number:";
		cin >> num2;
	}
	void sum(){
		product = num1 + num2;
	}
	void display(){
		cout << "The sum is "<< product;
	}
};
int main()
{
	calc ob;
	ob.input();
	ob.sum();
	ob.display();
	return 0;
}