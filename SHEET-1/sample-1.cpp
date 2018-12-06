#include <iostream>

using namespace std;
class calc
{
	int num1,num2;
	float product;

public:
	void input(){
		cout << "Enter first number:";
		cin >> num1;
		cout << "Enter second number:";
		cin >> num2;
	}
	void calcProduct(){
		product = num1 * num2;
	}
	void showProduct(){
		cout << "The product is "<< product;
	}
};
int main()
{
	calc ob;
	ob.input();
	ob.showProduct();
	ob.calcProduct();
	return 0;
}