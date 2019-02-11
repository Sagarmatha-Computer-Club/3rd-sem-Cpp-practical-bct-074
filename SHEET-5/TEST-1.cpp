/*
* TEST-1: inheritance test
* along with the extra test modification
* Sagarmatha-BCT-022
*/

#include <iostream>
using namespace std;

class one{
protected: // modification
	int num;
	// setting public: for below functions is a solution too
	void setnum(int x){
		num = x;
	}
	void shownum(){
		cout << "Base Class num = "<< num << endl;
	}
};
class two :public one{
public:
//---- solution (there exists more solutions)----
	//this solution : override !! not good . stupid .
//	int setnum(int x){
//		num = x;
//	}
//	void shownum(){
//		cout << "In Derived Class: num = "<< num << endl;
//	}
//---- ends here ---
	void proShowNum(){
		shownum();
	}
	void proSetNum(int x){
		setnum(x);
	}
	void shownums(){
		cout << "In derived class "<< num << endl;
	}
};
int main()
{
	two ob;
	// Test cases for error to happen 
	// one obj;
	// obj.shownum();
	//ob.one::shownum(); rubbish!!
	//
	ob.proShowNum();
	//solution while override >>> ob.setnum(5);//ob.num = 5;
	// ob.shownum(); error
	// ob.setnum(10); error
	ob.proSetNum(10);
	ob.shownums();
	return 0;
}
