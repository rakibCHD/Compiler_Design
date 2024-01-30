#include <iostream>
using namespace std;

int main() {

    int number;

     cout<<"Enter a non-negative number: ";
     cin >>number;

    if (number > 0) {
         int factorial = 1;
        for (int i = 1; i <= number; ++i)
        {
            factorial *= i;
        }
         cout <<"Factorial of "<<number<<" is: "<<factorial<<endl;
    }
     else
         cout << "Factorial is undefined for negative numbers." <<  endl;

    return 0;
}
