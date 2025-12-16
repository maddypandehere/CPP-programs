#include<iostream>
using namespace std;


int main()
{
    int length=0;
    int*Arr=NULL;

    cout<<"Enter the number of elements:\n";
    cin>>length;


    //step1:allocate the memory
    Arr=new int[length];
    if(Arr==NULL)
    {
        cout<<"Unable to allocate memory \n";
    }

    else
    {
        cout<<"Memory gets allocated successfully";
    }

    //step2:use the memory

    //step3:Deallocate the memory

    delete[] Arr;

    return 0;
    
}