#include <iostream>
using std::cout;
using std::cin;

//This function allows us to treat doubled numbers >= 10 as individual digits
int doubleDigitValue(int digit) {
    int doubledDigit = digit * 2;
    int sum;
    if (doubledDigit >= 10) sum = 1 + doubledDigit % 10;
    else sum = doubledDigit;
    return sum;
    }

int main () {
    //Takes a digit as a char and adds digit value to sum, doubling odd position digits
    char digit;
    int checksum = 0;
    int position = 1;
    cout << "Enter a number with an even number of digits: ";
    digit = cin.get();

    while (digit != 10) {
        if (position % 2 == 0) checksum += digit - '0';
        else checksum += doubleDigitValue(digit - '0');
        digit = cin.get();
        position++;
    }

    cout << "Sum of digits is " << checksum << ". \n";
    
    if (checksum % 10 == 0) {
        cout << "Checksum is divisible by 10. \n";
    } else {
        cout << "Checksum is not divisible by 10. Invalid. \n";
    }
}