#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int isFoundKeyword(string input)
{
    string final_string,keyword;

    for(int i=0;i<input.size();i++)
    {
      if(input[i]!=' ')
        final_string +=input[i];
    }

    ifstream file("keyword.txt");

    while(getline(file,keyword))
    {
      int pos =keyword.find(final_string);
        if ( pos >= 0)
            return 1;
    }
  return 0;
}

void check(string st)
{
    if(isFoundKeyword(st)==1)
        cout<<"It is a keyWord"<<endl;
    else
        cout<<"It is not a keyWord"<<endl;
}

int main(){
    string user_input;
    cout << "--------INPUT--------"<<endl;
    getline(cin, user_input);
    check(user_input);
}
