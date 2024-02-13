#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void isIdentifier()
{
        int space=0;
        string input,final_string;
        getline(cin,input);

        for(int i=0;i<input.size();i++)
        {
            if(input[i]==' ')
            {
               if(input[i]!=input[i+1])
               {
                  space++;
                  continue;
               }
            }
          if(space==1)
            final_string+=input[i];
        }
        cout<<final_string<<endl;
}

int main() {
    isIdentifier();
    return 0;
}
