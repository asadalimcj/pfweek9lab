#include<iostream>
using namespace std;
main()
{
    int size;
    int arr1[2];
    for(int idx = 0; idx<2; idx++)
    {
        cout<<"enter number:";
        cin>>arr1[idx];
    }
    cout<<"enter size of second array :";
    cin>>size;
    int arr2[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter number :";
        cin>>arr2[idx];
    }   
    cout<<arr1[0]<<" ";
    for(int idx = 0; idx<size; idx++)
    {
        cout<<arr2[idx]<<" ";
        
    } 
    cout<<arr1[1];
    

}