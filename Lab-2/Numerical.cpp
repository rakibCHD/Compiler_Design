#include<iostream>
#include<cctype>
using namespace std;

int main(){

    int count=0;
    string value;

    cout<<"Enter a string: ";
    cin>>value;

    for(int i=0;i<value.size();i++)
    {
        if(isdigit(value[i]))
            count++;
    }

    if(count  == value.size())
        cout<<"The string is numerical."<<endl;
    else
        cout<<"The string is not numerical."<<endl;

     return 0;
}
