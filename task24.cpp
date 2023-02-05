#include<iostream>
using namespace std;
main()
{
    
    string name;
    cout<<"enter character"<<endl;
    getline(cin, name);
    int counter = name.length();
    cout<<counter<<endl;
    for(int idx = 0; idx<=counter; idx++)
    {
       if(name[idx]=='a'|| name[idx]=='e' || name[idx]=='i' || name[idx]=='o' || name[idx]=='u')
       {
           continue;
       }
       cout<<name[idx];

    }
}