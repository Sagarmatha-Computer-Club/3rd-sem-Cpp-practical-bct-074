/* TEST-1
 * friend function
 * sagarmatha-BCT-074
 */
#include<iostream>
using namespace std;

class counter{
		private:
		 int number; 
		public:
			counter(){
					number = 1000;
				}
				counter(int x){
					number = x;
				}
			int updateNumber();
			friend int updateValue(counter);
	};
int counter :: updateNumber()
{
	return(number+5);
	}
int updateValue(counter one)
{
	one.number = one.number + 5;
	return one.number;
	}

	int main()
	{
		counter one,two;
		cout<<"Number Update using friend funtion "<<updateValue(one)<<endl;
		cout<<"Number Update using Member function "<<two.updateNumber()<<endl;
		return 0;
		}
	
