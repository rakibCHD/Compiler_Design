#include <iostream>
#include <string>
using namespace std;

void isValidIdentifier(string st)
{
    int int_pos,float_pos,double_pos,char_pos,string_pos,long_pos,void_pos,bool_pos;
    string final_string;

    if(st[st.size()-1]==';')
    {
        for(int i=0;i<st.size();i++)
        {
          if(st[i]!=' ' && st[i]!=';')
            final_string +=st[i];
        }
         int_pos =final_string.find("int");
         float_pos =final_string.find("float");
         double_pos =final_string.find("double");
         char_pos =final_string.find("char");
         string_pos =final_string.find("string");
         long_pos =final_string.find("long");
         void_pos =final_string.find("void");
         bool_pos =final_string.find("bool");

        if(int_pos==0||float_pos==0||double_pos==0||char_pos==0
         ||string_pos==0||long_pos==0||void_pos==0||bool_pos==0)
         {
            cout<<"Valid Declaration."<<endl;

             if(int_pos==0){
                cout<<"Data type is:int"<<endl;
                final_string.erase(int_pos,3);
                cout<<"Variable is :"<<final_string<<endl;
             }
             if(float_pos==0){
                cout<<"Data type is:float"<<endl;
                final_string.erase(float_pos,5);
                cout<<"Variable is :"<<final_string<<endl;
             }
             if(double_pos==0){
                cout<<"Data type is:double"<<endl;
                final_string.erase(double_pos,6);
                cout<<"Variable is :"<<final_string<<endl;
             }
             if(char_pos==0){
                cout<<"Data type is:char"<<endl;
                final_string.erase(char_pos,4);
                cout<<"Variable is :"<<final_string<<endl;
             }
             if(string_pos==0){
                cout<<"Data type is:string"<<endl;
                final_string.erase(string_pos,6);
                cout<<"Variable is :"<<final_string<<endl;
             }
              if(long_pos==0){
                cout<<"Data type is:long"<<endl;
                final_string.erase(long_pos,4);
                cout<<"Variable is :"<<final_string<<endl;
             }
              if(void_pos==0){
                cout<<"Data type is:void"<<endl;
                final_string.erase(void_pos,4);
                cout<<"Variable is :"<<final_string<<endl;
             }
              if(bool_pos==0){
                cout<<"Data type is:bool"<<endl;
                final_string.erase(bool_pos,4);
                cout<<"Variable is :"<<final_string<<endl;
             }
         }
         else
            cout<<"Invalid data type!!!!!"<<endl;
    }
    else
        cout<<"Invalid Declaration!!!"<<endl;
}

int main() {
    string s;
    cout<<"-------------INPUT----------"<<endl;
    getline(cin,s);
    isValidIdentifier(s);
    return 0;
}
