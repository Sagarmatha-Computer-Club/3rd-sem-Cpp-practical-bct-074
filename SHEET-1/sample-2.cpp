#include <iostream>

using namespace std;
class calc
{
	int num1,num2;
	float product;

public:
	void setValues(a,b){
		 
		num1 = a;
		
		num2 = b;
	}
	void getProduct(){
		return num1 * num2;
	}
};
int main()
{
	int p;
	calc ob;
	ob.setValues(3,5);
	p.getProduct();
	cout << "The product is"<<p;
	return 0;
}