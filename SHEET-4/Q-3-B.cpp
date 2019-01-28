/* PROBLEM-3
 * operator overloading
 * substract distance
 * sagarmatha-BCT-074-022
 */
 
#include <iostream>
using namespace std;

class Distance{
	int feet , inch;
	public:
	Distance(){
		feet = 0;
		inch = 0;
	}
	Distance(int x,int y){
		feet = x;
		inch = y;
	}
	void display(){
		cout << "The Distance is: " << feet << " ft " << inch << " inch " <<endl;
	}
	Distance operator - (Distance d2){
		Distance ans;
		ans.feet = feet - d2.feet;
		ans.inch = abs(inch - d2.inch);
		return ans;
	}
};
int main(){
	Distance d1(2,3),d2(5,6),d3;
	cout << "Displaying d1 and d2..."<<endl;
	d1.display();
	d2.display();
	d3 = d1 - d2;
	cout << "Displaying d3..."<<endl;
	d3.display();	
};
