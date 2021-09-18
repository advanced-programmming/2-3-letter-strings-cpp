#include<iostream>
#include<cstring>

using namespace std;

void validateString(string value);

int main() {
    string value;
    getline(cin, value);
    validateString(value);
    return 0; 
}

void validateString(string value){
    int count = 0;
    char array[value.length()];
    strcpy(array, value.c_str());
    
    for(int i = 0; i < value.length(); i++)
        if(array[i] != '-' && array[i] != ' ')
            count++;

    cout<<count<<endl;
}