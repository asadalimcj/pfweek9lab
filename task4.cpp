#include<iostream>
using namespace std;
main()

{
    int size;
    int multi;
    cout<<"enter size of array :";
    cin>>size;

    int numbers[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter number";
        cin>>numbers[idx];

    }  
    cout<<"enter the new number :";
    cin>>multi;  
    for(int idx = size-1; idx>=0; idx--)
    {
       cout<< multi*numbers[idx]<<" ";
    }

    

}