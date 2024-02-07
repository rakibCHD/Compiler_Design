#include<iostream>
#include<cctype>
using namespace std;

int main(){

    string value,arr;

    cout<<"Enter a string: ";
    cin>>value;

    for(int i=0;i<value.size();i++)
    {
      if(value[i]=='+'||value[i]=='-'||value[i]=='*'||value[i]=='/'||value[i]=='%'||value[i]=='=')
       arr+=value[i];
    }

    for(int i=0;i<arr.size();i++){
        cout<<"Oparetor "<<i+1<<" is: "<<arr[i]<<endl;
    }

    return 0;
}

