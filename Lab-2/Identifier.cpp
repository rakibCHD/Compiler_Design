#include <iostream>
#include <string>
using namespace std;

void isIdentifier()
{
        int space=0,error=0;
        string input,final_string;

        cout<<"-------------INPUT----------"<<endl;
        getline(cin,input);

        for(int i=0;i<input.size();i++)
        {
          if(input[input.size()-1]!=';')
            error=1;
          if(input[i] == ' ')
                space++;
          if(space > 0  && input[i]!=' ' && error == 0)
                 final_string +=input[i];
        }
        if(error==0)
            cout<<final_string<<endl;
        else
            cout<<"Error!!!"<<endl;
}

int main() {
    isIdentifier();
    return 0;
}
