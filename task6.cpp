#include<iostream>
using namespace std;
main()
{
    string name;
    cout<<"enter character"<<endl;
    getline(cin, name);
    int counter = 0;
    while(name[counter]!='\0')
    {
        counter++;
    }
    cout<<counter<<" is length of string"<<endl;
    if(counter%2==0)
    {
        cout<<"length is even :"<<endl;
    }
    else
    {
        cout<<"length is odd";
    }
}