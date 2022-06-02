#include <iostream>
using std::cout;
using std::cin;

int main () {

    for(int lineNum = 8; lineNum >= 1; lineNum -= 2){
        for (int spaces = 0; spaces <= 9 - (lineNum+2); spaces+=2){
            cout << " ";
        }

        for (int hashNum = 8; hashNum >= 9 - lineNum; hashNum--){
                cout << "#";
            }
        
        cout << "\n";
    }

}