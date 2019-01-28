/* PROBLEM- B 
 * operator overloading
 * concatenate strings
 * sagarmatha-BCT-074-022
 */
 
#include <iostream>
using namespace std;

class Str{
	string thread;
	public:
	Str(){
		thread = "";
	}
	Str(string x){
		thread = x;
	}
	void display(){
		cout << "The String is: " << thread <<endl;
	}
	Str operator + (Str str2){
		Str ans;
		ans.thread = thread ;
		ans.thread.append(str2.thread);
		return ans;
	}
};
int main(){
	Str str1("Hello"),str2("Nepal"),str3;
	cout << "Displaying str1 and str2..."<<endl;
	str1.display();
	str2.display();
	str3 = str1 + str2;
	cout << "Displaying str3..."<<endl;
	str3.display();	
};
