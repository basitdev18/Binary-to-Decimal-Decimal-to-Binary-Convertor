#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "========================================\n";
    cout << "        BINARY ⇆ DECIMAL CONVERTER      \n";
    cout << "========================================\n";
    cout << " 1. Convert Binary to Decimal\n";
    cout << " 2. Convert Decimal to Binary\n";
    cout << "----------------------------------------\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {

    // ------------------ Binary → Decimal ------------------
    case 1: {
        int binary, decimal = 0, base = 1;

        cout << "\nEnter a binary number (e.g., 1011): ";
        cin >> binary;

        int temp = binary;
        while (temp > 0) {
            int last_digit = temp % 10;
            decimal += last_digit * base;
            base *= 2;
            temp /= 10;
        }

        cout << "\n----------------------------------------\n";
        cout << "   Conversion Successful!\n";
        cout << "   Binary  : " << binary << "\n";
        cout << "   Decimal : " << decimal << "\n";
        cout << "----------------------------------------\n";
        break;
    }

    // ------------------ Decimal → Binary ------------------
    case 2: {
        int decimal;
        int binary[32];
        int i = 0;

        cout << "\nEnter a decimal number: ";
        cin >> decimal;

        int temp = decimal;
        while (temp > 0) {
            binary[i] = temp % 2;
            temp /= 2;
            i++;
        }

        cout << "\n----------------------------------------\n";
        cout << "   Conversion Successful!\n";
        cout << "   Decimal : " << decimal << "\n";
        cout << "   Binary  : ";

        for (int j = i - 1; j >= 0; j--) {
            cout << binary[j];
        }
        cout << "\n----------------------------------------\n";
        break;
    }

    // ------------------ Invalid Choice ------------------
    default:
        cout << "\nError: Invalid option selected.\n";
        cout << "Please restart the program and choose 1 or 2.\n";
    }

    return 0;
} NJ