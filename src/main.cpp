#include <iostream>
#include <string>
using namespace std;

int main() {
    int select;
    string username = "none";
    cout << "Welcome to NETchat!\n";
    cout << "Select 0 to exit\n";
    
    while(true){
        cout << "[" << username <<"]> ";
        cin >> select;
        switch(select){
            case 0:
             cout << "Bye!\n\n";
             return 0;
            case 1: 
             cout << "IDK\n\n";
             break;
            default: cout << "You didn't select correct number, press 1 for help\n\n";
        }
    }
}