/*
 * SHEET-2
 * SAMPLE-2
 * NABIN DHAKAL BCT-022
 * Sagarmatha Engineering College
 */


#include <iostream>
using namespace std;
float sum(int a=5, float b=10){
		return a+b;
}

int main()
{
	cout << "Sum with both default Arguments :"<< sum()<<endl;
	cout<< "Sum with one default Argument : "<<sum(7)<<endl;
	cout << "Sum with none default Argument :"<<sum(1,4.5)<<endl;
	return 0;
}

