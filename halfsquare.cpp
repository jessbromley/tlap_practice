#include <iostream>
using std::cout;
using std::cin;

int main () {

    for(int lineNum = 1; lineNum <= 5; lineNum++){
        for(int hashNum = 1; hashNum <= 6 - lineNum; hashNum++){
        cout << "#";
        }
    cout << "\n";
    }
    
}