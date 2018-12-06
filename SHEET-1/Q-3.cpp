#include <iostream>

using namespace std;
const float PI = 3.1415;
class Circle
{
	int radius;
public:
	void setRadius(){
		cout << "Enter the radius:";
		cin >> radius;
	}
	void getArea(){
		cout << "The area is "<< PI * (radius * radius);
	}
    void getCircumf(){
		cout << "The circumference is "<< 2 * PI * radius;
	}
};
int main()
{
	Circle circle;
    circle.setRadius();
    circle.getCircumf();
    circle.getCircumf();
	return 0;
}