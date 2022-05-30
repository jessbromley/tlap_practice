#include <iostream>
using std::cout;
using std::cin;

int main () {
    //Takes a digit as a character and add digit value to sum
    char digit;
    cout << "Enter a one-digit number: ";
    cin >> digit;
    int sum = digit - '0';
    cout << "Is the sum of digits " << sum << "? \n";
}
//This function allows us to treat doubled numbers >= 10 as individual digits
int doubleDigitalValue(int digit) {
    int doubledDigit = digit * 2;
    int sum;
    if (doubledDigit >= 10) sum = 1 + doubledDigit % 10;
    else sum = doubledDigit;
    return sum;
    }