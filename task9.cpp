#include<iostream>
using namespace std;
main()
{
    bool flag = false;
    string name;
    cout<<"enter character"<<endl;
    getline(cin, name);
    int counter = name.length();
    cout<<counter<<endl;
    char letter;
    cout<<"enter the letter"<<endl;
    cin>>letter;
    for(int idx = 0; idx<=counter; idx++)
    {
       if(name[idx]==letter)
       {
           flag = true;
       }
    }
    if(flag==true)
    {
        cout<<"character is found:"<<endl;
    }
    else
    {
        cout<<"character is not found"<<endl;
    }
    
}