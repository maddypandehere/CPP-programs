#include<iostream>
using namespace std;

class Base   //12
{
    public:
    int i;

    private:
    int j;

    protected:
    int k;

    public:
    Base()
    {
        i=10,j=20;k=30;
    }
    
    void fun()
    {
        cout<<i<<"\n"; //allowed

        cout<<j<<"\n";  //allowed

        cout<<k<<"\n";  //allowed
    }
};

class Derived :public Base   //16
{
    public:
    int x;
    void Display()
    {
        cout<<i<<"\n";  //allowed
        cout<<j<<"\n";  //error
        cout<<k<<"\n";   //allowed
    }
};

int main()
{
    Base bobj;
    Derived dobj;

    cout<<bobj.i<<"\n"; //allowed
    cout<<bobj.j<<"\n"; //eooe
    cout<<bobj.k<<"\n"; //error

    cout<<dobj.i<<"\n";
    cout<<dobj.j<<"\n"; // Error
    cout<<dobj.k<<"\n"; // Error
    
    dobj.fun();         // Allowed
    dobj.Display();     // Allowed

    return 0;
}
}