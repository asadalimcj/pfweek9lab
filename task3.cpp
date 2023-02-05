#include<iostream>
using namespace std;
main()

{
    bool found = false;
    int size;
    cout<<"enter size of array :";
    cin>>size;
    int arr[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter number";
        cin>>arr[idx];
    }
    int num;
    cout<<"enter number you want to find:";
    cin>>num;
    for(int idx = 0; idx<size; idx++)
    {
        if(num==arr[idx])
        {
            found = true;
        }

    }
    if(found==true)
    cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;

}