#include<iostream>
using namespace std;
class base{
    protected:
    int j=1,i,n;
    public:
    void setn(){
        cout<<"enter n:"<<endl;
        cin>>n;

    }
};
class derived :public base
{
    public:
    void getn(){
        for(i=1;i<=n;i++)
        
            {
                j=j*i;
            }
                 cout<<j<<endl;
            }
           
        
    
};
int main()
{
    derived t;
    t.setn();
    t.getn();
}