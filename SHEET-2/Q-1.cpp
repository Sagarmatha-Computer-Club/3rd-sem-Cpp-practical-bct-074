/*
 * SHEET-2
 * PROBLEM-1 : area and circumference using inline function
 * NABIN DHAKAL BCT-022
 * Sagarmatha Engineering College
 */


#include <iostream>
using namespace std;
const float PI = 3.1415;

inline float area(float r){
	return (PI*r*r);
}
inline float circumference(float r){
	return (2*PI*r);
}
int main()
{
	float radius;
	cout << "Enter the radius of the circle :";
	cin >> radius;
	cout << "The area of the circle is : " << area(radius);
	cout << "\n The circumference of the circle is : " << circumference(radius);

	
}

