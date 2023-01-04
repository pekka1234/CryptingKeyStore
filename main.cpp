#include<iostream>
#include<string>
#include <fstream>
using namespace std;
int main(){
    //Gathering info
    string key = "";
    cout << "Enter crypting key:\n";
    cin >> key;
    string password = "";
    cout << "\nEnter password:\n";
    cin >> password;
    cout << "\nEnter message to displayed when running program in usb stick:\n";
    string message = "";
    cin >> message;
    cout << "File Program.cpp will be generated to this folder based to your previously given information. Compile that program yourshelf and put in in the usb stick that contains crypted files. If you want to access those files type the password when you run the program and get the decryption key.\n";

    //Generating program.cpp
    ofstream MyFile("Program.cpp");
    MyFile << "#include<iostream>\n#include<string>\nusing namespace std;\nint main(){cout << " << '"' << message << '"' << ";string password = " << '"' << password << '"' << ";string inputFromUser = " << '"' << '"' << "; cin >> inputFromUser;if(inputFromUser == password){cout << " << '"' << key << '"'<< ";}}";
    MyFile.close();
}