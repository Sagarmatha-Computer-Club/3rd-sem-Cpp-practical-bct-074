/*
 * SHEET-2
 * PROBLEM-2 : simple interest with default arguments
 * NABIN DHAKAL BCT-022
 * Sagarmatha Engineering College
 */


#include <iostream>
using namespace std;
inline float interest(float p,int t=2,float r=10){
	return (p*t*r)/100;
}

int main()
{
	
	cout << "Only the principle given (5), interest is "<< interest(5)<< endl;
	cout << "Principle and rate given (5,10), interest is "<< interest(5,10)<< endl;
	cout << "Only the principle given (10,10,9.99), interest is "<< interest(10,10,9.99)<< endl;
	return 0;
}

