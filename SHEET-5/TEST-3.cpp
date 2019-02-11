/*
* TEST-3: class hierarchy
* along with the extra test modification
* Sagarmatha-BCT-022
*/

#include <iostream>
using namespace std;

class Staff{
	private:
		char * name;
		int staffid;
	public:
		void setinfo(char *n,int id){
			name = n;
			staffid = id;
		}
		void showInfo(){
			cout << "Staff Name: "<< name << endl<< " ID: "<< staffid<< endl;
		}
};
class Lecturer : public Staff{
	int workload;
	public:
		void setLoad(int x){
			workload = x;
		}
		void showInfo(){
			Staff::showInfo();
			cout << "Workload: "<< workload<< endl;
		}
};
class Librarian : public Staff{
	int bookDemand;
	public:
		void setDemand(int x){
			bookDemand = x;
		}
		void showInfo(){
			cout << "Bookdemand: "<< bookDemand<< endl;
		}
};
int main(){
	Lecturer person1;
	person1.setinfo("Min Bahadur",01);
	person1.setLoad(5);
	Librarian person2;
	person2.Staff::setinfo("Bishwas Dangol",02);
	person2.setDemand(5);
	person1.showInfo(); // staff's showinfo is called inside this override function definition
	person2.Staff::showInfo(); // By purpose: staff's showinfo is NOT called inside the override function definition 
}
