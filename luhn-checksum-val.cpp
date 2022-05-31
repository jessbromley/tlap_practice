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
    int evenChecksum = 0;
    int oddChecksum = 0;
    int position = 1;
    cout << "Enter an ID number: ";
    digit = cin.get();

    while (digit != 10) {
        if (position % 2 == 0) {
            evenChecksum += digit - '0';
            oddChecksum += doubleDigitValue(digit - '0');
        } else {
            evenChecksum += doubleDigitValue(digit - '0');
            oddChecksum += digit - '0';
        }
        digit = cin.get();
        position++;
    }
    
    if ((position - 1) % 2 == 0) {
        cout << "Sum of digits is " << evenChecksum << ". \n";
    } else {
        cout << "Sum of digits is " << oddChecksum << ". \n";
    }
    
    if (oddChecksum % 10 == 0) {
        cout << "Checksum is divisible by 10. \n";
    } else {
        cout << "Checksum is not divisible by 10. Invalid. \n";
    }
}