#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("SourceCode.txt");

    string sLine;
    while (getline(file, sLine)) {

        sLine.erase(0, sLine.find_first_not_of(" \t"));
        sLine.erase(sLine.find_last_not_of(" \t") + 1);

        if (sLine.find("#include") != string::npos) {
            cout << "It's a dependency: " << sLine << endl;
            continue;
        }

        if (sLine == "using namespace std;") {
            cout << "Namespace Declaration." << endl;
            continue;
        }

        if (sLine == "int main() {") {
            cout << "Main Function." << endl;
            continue;
        }

        if ((sLine.find("double ") != string::npos || sLine.find("int ") != string::npos)&&!(sLine.find("(") != string::npos) ){
            cout << "Variable Declaration. " << sLine << endl;
            continue;
        }

        if (sLine.find("cout") != string::npos) {
            cout << "Output: " << sLine << endl;
            continue;
        }

        if (sLine.find("(") != string::npos && sLine.find(")") != string::npos) {
            if (sLine.find(";") != string::npos)
                cout << "Function Declaration: " << sLine << endl;
            else
                cout << "Main Function Calling: " << sLine << endl;

            continue;
        }

        if (sLine.find("//") == 0) {
            cout << "Comment: " << sLine.substr(2) << endl;
            continue;
        }

    }

    return 0;
}
