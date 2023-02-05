#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter character"<<endl;
    getline(cin, name);
    int counter = name.length();
    cout<<counter<<endl;
    char letter;
    cout<<"enter the letter"<<endl;
    cin>>letter;
    if(name[counter-1]==letter)
    {
        cout<<"same"<<endl;
    }
    else
    {
        cout<<"not same"<<endl;
    }
}