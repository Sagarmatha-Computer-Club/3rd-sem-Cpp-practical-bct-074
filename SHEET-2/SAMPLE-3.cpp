/*
 * SHEET-2
 * SAMPLE-3
 * NABIN DHAKAL BCT-022
 */


#include <iostream>
#include <cmath>
using namespace std;

int area (int length){
	return length * length;
}
float area (float radius){
	return 3.1416*radius*radius;
}
int area (int length ,int breadth){
	return length * breadth;
}
float area (int a,int b, int c){
	float s = (a+b+c)/2.0;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}
int main()
{
	cout<<"Area of Square is " << area(4)<<endl;
	cout<<"Area of Circle is " << area(4.0f)<<endl;
	cout<<"Area of Rectangle is " << area(4,5)<<endl;
	cout<<"Area of Triangle is " << area(3,4,5)<<endl;
	return 0;
}

