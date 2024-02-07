#include<iostream>
#include<cctype>
using namespace std;

int main(){

    string value;

    cout<<"Enter a string: ";
    cin>>value;

    if(value[0]=='/' && value[1]=='/'){
        cout<<"It's a Single line comment"<<endl;
    }
    else if(value[0]=='/' && value[1]=='*' && value[value.size()-2]=='*' && value[value.size()-1]=='/'){
        cout<<"It's a Multiple line comment"<<endl;
    }
    else{
        cout<<"It's not a comment line"<<endl;
    }

    return 0;
}
