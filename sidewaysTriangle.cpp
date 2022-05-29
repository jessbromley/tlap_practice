#include <iostream>
using std::cout;
using std::cin;

int main () {

    for (int lineNum = 1; lineNum <= 7; lineNum++)
    {
        for (int hashNum = 1; hashNum <= 4 - abs(4 - lineNum); hashNum++){
            cout << "#";
        }
        cout << '\n';

    }
    
}