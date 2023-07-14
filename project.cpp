#include<iostream>
using namespace std;
class test
{   
    private:
    char name[20];
    int mobilenumber;
    public:

    void getN(){
    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"enter mobile number:"<<endl;
    cin>>mobilenumber;
    }

    void setdata()
    {
    cout<<"name is :"<<name<<endl;;
    cout<<"moblie number is:"<<mobilenumber;
    }
};

int main()
{
    test y;
    y.getN();
    y.setdata();
    
}