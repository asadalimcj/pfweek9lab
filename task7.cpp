#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter character"<<endl;
    getline(cin, name);
    int counter = name.length();
    cout<<counter<<endl;
    
    for(int idx = counter; idx>=0; idx--)
    {
        cout<<name[idx]<<" ";
    }
}