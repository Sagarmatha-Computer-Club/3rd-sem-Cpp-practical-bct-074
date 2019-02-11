#include<iostream>
using namespace std;
class parents
{
	public:
		virtual void showAttrib() // to avoid ambigious we use virtual function
		{
			cout<<"Attributes from parents"<<endl;
		}
};
class environment
{
	public:
	    void showAttrib()
		{
			cout<<"Attribute from environment"<<endl;
		}
};
class child :public parents,public environment
{
	public:
		void show()
		{
			cout<<"All Attribute"<<endl;
		}
};
int main()
{
	child c;
	//c.showAttrib(); shows ambigious
	c.parents::showAttrib();
	c.environment::showAttrib();
	c.show();
	return 0;
}
