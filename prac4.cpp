// #include <iostream>
// using namespace std;

// // Class to represent a complex number
// class Complex {
//     private:
//         float real, imag;  // Real and imaginary parts

//     public:
//         // Constructor to initialize complex number
//         Complex(float r = 0, float i = 0) {
//             real = r;
//             imag = i;
//         }

//         // Friend function to add two complex numbers
//         friend Complex addComplex(Complex, Complex);

//         // Function to display complex number
//         void display() {
//             cout << real;
//             if (imag >= 0) {
//                 cout << " + " << imag << "i" << endl;
//             } else {
//                 cout << " - " << -imag << "i" << endl;
//             }
//         }
// };

// // Friend function definition to add two complex numbers
// Complex addComplex(Complex c1, Complex c2) {
//     // Adding real and imaginary parts separately
//     float realPart = c1.real + c2.real;
//     float imagPart = c1.imag + c2.imag;
//     return Complex(realPart, imagPart);
// }

// int main() {
//     // Declare two complex numbers
//     Complex complex1(3.4, 5.6);
//     Complex complex2(1.2, 3.4);

//     // Add complex numbers using friend function
//     Complex result = addComplex(complex1, complex2);

//     // Print the result
//     cout << "Sum of complex numbers: ";
//     result.display();

//     return 0;
// }
#include <iostream>
using namespace std;

class PrimeChecker {
public:
    // Friend function to check if a number can be expressed as sum of two primes
    friend bool canBeSumOfTwoPrimes(int n);

    // Function to check if a number is prime
    static bool isPrime(int num) {
        if (num <= 1) return false;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) return false;
        }
        return true;
    }
};

// Friend function definition
bool canBeSumOfTwoPrimes(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (PrimeChecker::isPrime(i) && PrimeChecker::isPrime(n - i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (canBeSumOfTwoPrimes(num)) {
        cout << num << " can be expressed as the sum of two prime numbers." << endl;
    } else {
        cout << num << " cannot be expressed as the sum of two prime numbers." << endl;
    }

    return 0;
}

