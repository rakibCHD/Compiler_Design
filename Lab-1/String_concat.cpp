#include <iostream>
#include <cstring>
using namespace std;

int main() {

    int sizeofArray1;
    int sizeofArray2;

    cout<<"Enter number of element in First-Name:";
    cin>>sizeofArray1;

    cout<<"Enter number of element in Last-Name:";
    cin>>sizeofArray2;

    char firstName[sizeofArray1];
    char lastName[sizeofArray2];
    char fullname[sizeofArray1+sizeofArray2+1];

    cout<<"Enter First Name: ";
    for(int i=0;i<sizeofArray1;i++)
    {
        cin>>firstName[i];
        fullname[i]=firstName[i];
    }

    fullname[sizeofArray1]= ' ';

    cout<<"Enter Last Name: ";
    for(int i=0;i<sizeofArray2;i++)
    {
        cin>>lastName[i];
        fullname[sizeofArray1+1+i]=lastName[i];
    }

    cout<<"Full Name is: ";

    for(int i=0;i<sizeofArray1+sizeofArray2+1;i++)
    {
        cout<<fullname[i];
    }

    return 0;
}
