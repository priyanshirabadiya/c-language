#include<iostream>
using namespace std;
class result{
    int acc,stat,guj,total;
    char name[20];
    double per;
    public:
    void opt();
    void sname(){

        cout<<"name"<<"\t"<<"acc"<<"\t"<<"stat"<<"\t"<<"guj"<<endl;
        cout<<name<<"\t"<<acc<<"\t"<<stat<<"\t"<<guj<<"\t"<<total<<"\t"<<per<<endl;
        // total=acc+stat+guj;
        // per=total/3;
    }
    void getn()
    {
         total=acc+stat+guj;
        per=total/3;
    }
};
    void result::opt()
    {
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter acc:"<<endl;
        cin>>acc;
        cout<<"enter stat:"<<endl;
        cin>>stat;
        cout<<"enter guj:"<<endl;
        cin>>guj;
        getn();
        sname();

    };
int main()
{
    result t[2];
    int i;
    for(i=0;i<=2;i++)
    {
        t[i].opt();
    }
    
}