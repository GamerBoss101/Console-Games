#include <iostream>
#include "./include/helper.cpp"
#include "./include/journey.cpp"

using namespace std;

string name;

string stories[2] = { "Journey", "st2" };

void Selector(string option) {
    if(option == "Journey") Journey(name);
    if(option == "st2") return; //Journey(name);
}

int main() {
    string user_input;
    cout << "Whats your name ?" << endl;
    cin >> name;
    while(true) {
        system("clear");
        cout << "Welcome " << name << "!" << endl;
        cout << "What story would you like to play ?" << endl;
        for(int j = 0; j <= 1; j++) {
            cout << j + 1 << ". " << stories[j] << endl;
        }
        cout << "Enter \"exit\" to exit." << endl;
        cout << "Input: ";
        cin >> user_input;
        if(user_input == "exit") return 0;

        if(contains(user_input, stories)){
            Selector(user_input);        
        } else {
          cout << "Can't find story Line." << endl;  
        }
    }
    return 0;
}