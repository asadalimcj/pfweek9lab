#include<iostream>
using namespace std;
main()

{
    int size;
    int count = 1;
    cout<<"enter size of array :";
    cin>>size;

    int numbers[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter number";
        cin>>numbers[idx];

    }  
    int smallest = numbers[0];
    for(int idx = 1; idx<size; idx++)
    {
        if(smallest<=numbers[idx]);
        
    }
    cout<<smallest;
}