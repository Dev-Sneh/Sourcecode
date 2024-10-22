#include <iostream>
using namespace std;

int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Factorial Table (Reverse):" << endl;
    for (int i = number; i >= 0; i--) {
        cout << i << "! = " << factorial(i) << endl;
    }
    return 0;
}
