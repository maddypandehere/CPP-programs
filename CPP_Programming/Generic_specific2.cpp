#include<iostream>    //this is generic
using namespace std;


template <class T>

T Add(T No1,T No2)
{
    T Ans;
    Ans=No1+No2;
    return Ans;

}

int main()
{
    int iValue1=10;
    int iValue2=11;
    int iRet=0;

    iRet=Add(iValue1,iValue2);

    cout<<iRet;

    return 0;
}

