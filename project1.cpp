#include<iostream>
using namespace std;
class test
{   
    private:
    char name[20];
    int mobilenumber,macncurian=1000,dhosa=1500,bhjiya=2000,panjabi=3000,choice;
    public:

    void getN(){
    cout<<"enter name:"<<endl;
    cin>>name;
    cout<<"enter mobile number:"<<endl;
    cin>>mobilenumber;
    cout<<"name is :"<<name<<endl;
    cout<<"mobile number is:"<<mobilenumber<<endl; 
    
    }
    void tina(){

       cout<<"manchurian=100"<<endl;
    //    cout<<"sup=200"<<endl;
    //    cout<<"nudals=400"<<endl;
    //    cout<<"dhosa=300"<<endl;
    //    cout<<"megi=200"<<endl;
    //    cout<<"gini roll=1000"<<endl;
    //    cout<<"chash=300"<<endl;
    }
    void mina(){
         cout<<"sup=200"<<endl;
    }
    void gita(){
         cout<<"nudals=400"<<endl;

    }
    void maju(){
        cout<<"dhosa=300"<<endl;
    }
};

int main()
{
    test t;
    t.getN();
    int ch;
    cout<<"1.machuriyan amount:"<<endl;
    cout<<"2.sup amount:"<<endl;
    cout<<"3.nudals amount:"<<endl;
    cout<<"4.dhosa amount :"<<endl;
    do 
    {
        cout<<"enter choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            t.tina();
            break;
            case 2:
            t.mina();
            break;
            case 3:
            t.gita();
            break;
            case 4:
            t.maju();
            break;
            default:
            cout<<"wrong choice:"<<endl;
            break;
        }
    }while(ch!=0)


}

    
}