/* TEST-1
 * static member function
 * sagarmatha-BCT-074
 */
#include<iostream>
using namespace std;

class bike{
		private:
			static int bikeCount;
			int IotNumber,powerCC;
		public:
			bike(int In,int pc){
					IotNumber = In;
					powerCC = pc;
					bikeCount++;
				}
			void showDetails(){
					cout << "Lot Number: " <<IotNumber <<endl;
					cout << "Power in CC: " << powerCC<<endl;
				}
			static int getBikeCount(){
					return bikeCount;
				}
	};
int bike :: bikeCount = 0;

	int main()
	{
		cout << "Initial Bike Count : " << bike::getBikeCount()<<endl;
		bike bike1(3409,125),bike2(2321,150);
		cout << "Bike1" <<endl;
		bike1.showDetails();
		cout << "Bike2" <<endl;
		bike2.showDetails();
		cout << "Final bike Count: " << bike::getBikeCount()<<endl;
		return 0;
		}
	
