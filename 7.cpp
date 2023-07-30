#include<iostream>
using namespace std;
//#include<conio.h>
class base{
	protected:
	int n,i,j;
	public:
	void setn(){
	cout<<"enter n:"<<endl;
	cin>>n;
	}
};
class test:public base
{
	public:
	void getn(){
	for(i=1;i<=n;i++)
		{
		   j=i*i;
		   cout<<"squre is :"<<j<<endl;
		}
	}
};
int main()
{
	test t;
	t.setn();
	t.getn();
}