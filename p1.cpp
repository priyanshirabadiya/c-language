#include<iostream>
using namespace std;
class test
{   
    private:
    char name[20];
    int mobilenumber,dhosa=200,burger=300,pizza=500,number,total,net1,gst1,real1,net,gst,real,net3,real3,gst3,eng,choice;
    public:
     void setn()
     {
         cout<<"\t""\t""\t"<<"welcome to dhaba entertinment"<<endl;
     cout<<"enter name:"<<endl;
     cin>>name;
     cout<<"enter mobile number:"<<endl;
     cin>>mobilenumber;
     cout<<"name is :"<<name<<endl;
     cout<<"mobile number is:"<<mobilenumber<<endl; 
     
        cout<<"1.dhosa                :100"<<endl;
        cout<<"2.burger               :200"<<endl;
        cout<<"3.nudals               :400"<<endl;
        cout<<"4.manchuran            :300"<<endl;
        cout<<"5.megi                 :200"<<endl;
        cout<<"6.gini roll            :1000"<<endl;
        cout<<"7.chash                :300"<<endl;
        
    }
    void pri()
    
        {
            
            cout<<"quntity:"<<endl;
            cin>>number;
            net1=number*dhosa;
            gst1=net1/100*2.5;
            real1=net1+gst1;
            cout<<"iteam"<<"\t""\t";cout<<"net"<<"\t""\t";  cout<<"gst"<<"\t""\t";  cout<<"tamt"<<"\t""\t"<<endl;
             if(real>0){
            cout<<"burger"<<"\t""\t";cout<<net<<"\t""\t";    cout<<gst<<"\t""\t";    cout<<real<<endl;
            }
            if(real3>0){
            cout<<"pizza"<<"\t""\t";cout<<net3<<"\t""\t";    cout<<gst3<<"\t""\t";    cout<<real3<<endl;
            }
            
            cout<<"dhosa"<<"\t""\t";cout<<net1<<"\t""\t";    cout<<gst1<<"\t""\t";    cout<<real1<<endl;
            total=real3+real+real1;
            cout<<"total"<<"\t""\t""\t""\t""\t""\t"<<total<<endl;
        }
    void jay()
        { 
           
          
            cout<<"quntity:"<<endl;
            cin>>number;
            net=number*burger;
            gst=net/100*2.5;
            real=net+gst;
            cout<<"iteam"<<"\t""\t";cout<<"net"<<"\t""\t";  cout<<"gst"<<"\t""\t";  cout<<"tamt"<<"\t""\t"<<endl;
            if(real1>0){
            cout<<"dhosa"<<"\t""\t";cout<<net1<<"\t""\t";    cout<<gst1<<"\t""\t";    cout<<real1<<endl;
            }
            if(real3>0){
            cout<<"pizza"<<"\t""\t";cout<<net3<<"\t""\t";    cout<<gst3<<"\t""\t";    cout<<real3<<endl;
            }
            cout<<"burger"<<"\t""\t";cout<<net<<"\t""\t";    cout<<gst<<"\t""\t";    cout<<real<<endl;
            total=real+real1+real3;
            cout<<"total"<<"\t""\t""\t""\t""\t""\t"<<total<<endl;
            
        }
        void mita()
        {
        
            cout<<"quntity:"<<endl;
            cin>>number;
            net3=number*pizza;
            gst3=net3/100*2.5;
            real3=net3+gst3;
            cout<<"iteam"<<"\t""\t";cout<<"net"<<"\t""\t";  cout<<"gst"<<"\t""\t";  cout<<"tamt"<<"\t""\t"<<endl;
            if(real>0){
            cout<<"dhosa"<<"\t""\t";cout<<net<<"\t""\t";    cout<<gst<<"\t""\t";    cout<<real<<endl;
            }
            if(real1>0){
            cout<<"burger"<<"\t""\t";cout<<net1<<"\t""\t";    cout<<gst1<<"\t""\t";    cout<<real1<<endl;
            }
            cout<<"pizza"<<"\t""\t";cout<<net3<<"\t""\t";    cout<<gst3<<"\t""\t";    cout<<real3<<endl;
            total=real3+real+real1;
            cout<<"total"<<"\t""\t""\t""\t""\t""\t"<<total<<endl;
        }
            
        
    };
    

int main()
{
    test t;
    t.setn();
    int ch;
    do
    {
        cout<<"enter choice:"<<endl;
        cin>>ch;
        switch(ch)
        {
            
            case 1:
            t.pri();
            break;
            case 2:
            t.jay();
            break;
            case 3:
            t.mita();
            break;
            default:
            cout<<"wrong choice"<<endl;
            break;
        }
    }while(ch!=0);
    
}