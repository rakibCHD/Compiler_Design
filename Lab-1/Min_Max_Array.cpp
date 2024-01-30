#include <iostream>
using namespace std;

int main() {

    int sizeofArray;

    cout<<"Enter number of element in Array:";
    cin>>sizeofArray;

    float arr[sizeofArray];

    cout<<"\nEnter of element in Array:";

    for(int i=0;i<sizeofArray;i++)
    {
        cin>>arr[i];
    }

    float minimam = arr[0];
    float maximam = arr[0];

    for (int i=0;i<sizeofArray;i++)
        {
        if (arr[i] < minimam) {
            minimam = arr[i];
        }
        if (arr[i] > maximam) {
            maximam = arr[i];
        }
    }

    cout<<"Minimum value: "<< minimam<<endl;
    cout<<"Maximum value: "<< maximam<<endl;

    return 0;
}
