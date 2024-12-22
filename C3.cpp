#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0; // Initialize count outside the loop
    while (n > 0) {
        n /= 10; // Remove the last digit of n
        count++; // Increment the digit count
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int result = countDigits(n);
        cout << "The number of digits in " << n << " is: " << result << endl;
    }
    
    return 0;
}
