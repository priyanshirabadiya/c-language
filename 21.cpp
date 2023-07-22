#include<iostream>
using namespace std;
class Base{
    public:
    int l,w,h;
    void setdata(int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    Base operator+(Base &n)
    {
        Base t;
        t.l=l+n.l;
        t.w=w+n.w;
        t.h=h+n.h;
        return t;
    }
};
int main()
{
    Base b,a,c;
    b.setdata(3,3,3);
    cout<<"value of base a:"<<b.getdata()<<endl;
    a.setdata(4,4,4);
    cout<<"value of base b:"<<a.getdata()<<endl;
    c=b+a;
    cout<<"value of base c:"<<c.getdata()<<endl;
}