/* PROBLEM-1
 * static data member
 * sagarmatha-BCT-074-011
 */
#include <iostream>
using namespace std;
class Admission
{
    private:
        static int no_member;
        int no_group;
    public:
         Admission()
         {
		    no_member=0;
		 }
		 
         static int admitOne( int x)
         {
		      no_member+=x;
		      return (no_member);
		 }
		 int admitGroup(int x)
		 {
			 no_member+=5*x;
		      return (no_member);
		 }
};
int Admission::no_member=0;
int main()
{	Admission x;
     cout<<"individual admission :"<<Admission::admitOne(2)<<endl;  
  
     cout<<"group admission :"<< x.admitGroup(2)<<endl;
}
