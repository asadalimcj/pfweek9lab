#include<iostream>
using namespace std;
main()
{
    int size;
    float sum = 0;
    cout<<"enter array size :";
    cin>>size;
    float resistance[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter the value :";
        cin>>resistance[idx];
    }
    for(int idx = 0; idx<size; idx++)
    {
        sum = sum+resistance[idx];
    }
    cout<<"total resistance is :"<<sum<<" ohms"<<endl;

}