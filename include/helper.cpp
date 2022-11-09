#include <iostream>

using namespace std;

bool contains(string input, string data[]){
    for(int i = 0; i <= data->length(); i++) {
        if(data[i] == input) {
            return true;
        }
    }
    return false;
}

