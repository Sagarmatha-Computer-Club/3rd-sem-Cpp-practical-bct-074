/* TEST-1
 * static data member
 * sagarmatha-BCT-074
 */
#include<iostream>
using namespace std;

class donation{
		private:
			static int amount; // For test remove static
		public:
			donation(){
					amount = 1000;
				}
			void donate(int am){
					amount = amount + am;
				}
			int getAmount(){
					return amount;
				}
	};
int donation :: amount = 1000;

	int main()
	{
		donation donor1,donor2,donor3;//default constructor called
		donor1.donate(100); // adds 100 to static amount
		donor2.donate(200); // again adds 200 to static amount
		cout << "Total Donation: " << donor1.getAmount() << endl;// 1300
		cout << "Total Donation: " << donor2.getAmount() << endl;// 1300
		cout << "Total Donation: " << donor3.getAmount() << endl;// 1300
		
		return 0;
		}
	
