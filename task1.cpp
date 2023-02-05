#include<iostream>
using namespace std;
main()

{
    int size;
    int sum = 0;
    cout<<"enter size of array :";
    cin>>size;

    int numbers[size];
    for(int idx = 0; idx<size; idx++)
    {
        cout<<"enter number";
        cin>>numbers[idx];

    }    
    for(int idx = 0; idx<size; idx++)
    {
        sum = sum + numbers[idx];
    }
    cout<<sum<<endl;
    cout<<"average :"<<sum/size;
    

}