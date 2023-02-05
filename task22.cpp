#include<iostream>
using namespace std;
main()
{
    float price;
    float sum = 0;
    cout<<"enter price ";
    cin>>price;
    float arr[4];
    for(int idx = 0; idx<4; idx++)
    {
        cout<<"enter values";
        cin>>arr[idx];
        
    }
    sum = 0.25*arr[0]+0.10*arr[1]+0.05*arr[2]+0.01*arr[3];
    if(sum>=price)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

}