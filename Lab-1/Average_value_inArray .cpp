#include <iostream>
using namespace std;

int main() {

    int sizeofArray;
    float average=0;

    cout<<"Enter number of element in Array: ";
    cin>>sizeofArray;

    int arr[sizeofArray];

    cout<<"\nEnter element of Array:";

    for(int i=0;i<sizeofArray;i++)
    {
        cin>>arr[i];
        average+=arr[i];
    }

    cout<<"Average: " <<average/sizeofArray<<endl;

    return 0;
}
