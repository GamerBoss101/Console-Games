#include <cctype>
#include <iostream>
#include <locale> 

using namespace std;

string placeholder;

string username;
string type;
int health;

void pickType() {
    locale loc;
    bool choice = false;
    while(choice != true) {
        cout << "Pick your Type." << endl;
        cout << "1. Sword" << endl;
        cout << "2. Bow" << endl;
        cin >> type;
        cout << std::tolower(type,loc);

    }
}

void Journey(string Iusername) {
    system("clear");
    username = Iusername;
    cout << "Welcome " << Iusername << " to Journey!" << endl;
    pickType();
    cin >> placeholder;
}

