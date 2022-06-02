#include <iostream>
using std::cout;
using std::cin;

int main () {
    cout << "Enter a number: \n";
    char digitChar;
    
    do {
        digitChar = cin.get();
        int number = (digitChar - '0');
        digitChar = cin.get();

        while ((digitChar != 10) && (digitChar != ',')){
            number = number * 10 + (digitChar - '0');
            digitChar = cin.get();
        }
        cout << "Number entered: " << number << "\n";
    } while (digitChar != 10);

    // //start in uppercase mode
    // if(digit % 27 == 0){
    //     //switch to lowercase mode
    //     if(digit % 27 == 0){
    //         //switch to punc mode
    //         if(digit % 9 == 0){
    //             //switch to uppercase mode
    //         }
    //     }
    // } 

        

}