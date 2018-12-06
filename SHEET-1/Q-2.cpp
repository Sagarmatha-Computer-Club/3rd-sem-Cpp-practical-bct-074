#include <iostream>

using namespace std;
class Rectangle
{
	int length,breadth;
public:
	void setValues(){
		cout << "Enter the length:";
		cin >> length;
		cout << "Enter the breadth:";
		cin >> breadth;
	}
	void showArea(){
		cout << "The area is "<< length*breadth;
	}
};
int main()
{
	Rectangle rectangle;
    rectangle.setValues();
    rectangle.showArea();
	return 0;
}