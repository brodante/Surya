#include <iostream>
#include <cstring>
#include<string>
using namespace std;
string getCompressedString(string &input) {
int count = 1;
    char currentChar = input[0];
    int i, nextIndex = 1;
    for(i = 1; input[i] != '\0'; i++){
        // Count the occurrence of consecutive duplicate character
        if(input[i] == currentChar){
            count++;
        }
        else{
            // Append the count with string
            if(count > 1){
                input[nextIndex] = char(count + 48);
                nextIndex++;
            }
            currentChar = input[i];
            input[nextIndex] = input[i];
            nextIndex++; count = 1;
        }
    }
    if(count > 1)
    {
        input[nextIndex] = char(count + 48);
        nextIndex++;
    }
    input[nextIndex]='\0';
    return input;
}

int main() {
    int size = 1e6;
    string str;
    cin >> str;
    str = getCompressedString(str);
    cout << str << endl;
}
