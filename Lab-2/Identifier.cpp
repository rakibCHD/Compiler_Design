#include <iostream>
#include <string>
using namespace std;

void isIdentifier()
{
        int space=0;
        bool is_end =false;
        string input,final_string;

        cout<<"-------------INPUT----------"<<endl;
        getline(cin,input);

        for(int i=0;i<input.size();i++)
        {
          if(input[i] == ' ')
                space++;

          if(space >0  && input[i]!=' '&& is_end==false)
              {
                 final_string +=input[i];
                 if(i==(input.size()-1) && input[i]==';')
                   {
                     is_end=true;
                   }
                if(input[i]='')
                   {
                     is_end=true;
                   }
              }

        }

          cout<<final_string<<endl;

         cout<<is_end<<endl;

}

int main() {
    isIdentifier();
    return 0;
}
