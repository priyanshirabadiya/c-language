#include<iostream>
using namespace std;
class base{
    protected:
    int n;
    public:
    void setN(){
    cout<<"enter n:"<<endl;
    cin>>n;
}
};
class derived :public base{
    public:
    void getN()
    {
        cout<<"number is:"<<n<<endl;
    }

};
int main()
{
    derived t;
     t.setN();
     t.getN();
}