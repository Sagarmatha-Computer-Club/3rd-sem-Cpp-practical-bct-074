/*
 * SHEET-2
 * PROBLEM-3 B : Perimeter of circle, square ,rectangle,triangle using function overloading
 * NABIN DHAKAL BCT-022
 * Sagarmatha Engineering College
 */


#include <iostream>
#include <cmath>
using namespace std;
const float PI = 3.1416;
int perimeter (int length){
	return (4*length);
}
float perimeter (float radius){
	return (2*PI*radius);
}
int perimeter (int length ,int breadth){
	return (2*(length + breadth));
}
float perimeter (int a,int b, int c){
	return ((a+b+c)/2.0);
}
int main()
{
	cout<<"Perimeter of Square is " << perimeter(4)<<endl;
	cout<<"Perimeter of Circle is " << perimeter(4.0f)<<endl;
	cout<<"Perimeter of Rectangle is " << perimeter(4,5)<<endl;
	cout<<"Perimeter of Triangle is " << perimeter(3,4,5)<<endl;
	return 0;
}

