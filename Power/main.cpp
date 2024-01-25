#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define POWER
//#define POWER_2

void main() {

	double a;        // degree base
	int n;			 // exponent
	double N = 1;    // degree

	cout << "Enter the number to be raised to base power: "; cin >> a;
	cout << "Enter exponent: ";	cin >> n;

#ifdef POWER

	if (n < 0) {

		a = 1 / a;
		n = -n;
	}
	for (int i = 0; i < n; i++) {

		N *= a;
	}

#endif // POWER


#ifdef POWER_2

        if (n >= 0) {
            for (int i = 0; i < n; ++i) {
                N *= a;
            }
        }
        else {
            // If the exponent is negative, we use the inverse multiplication (exponentiation by modulus)
            for (int i = 0; i > n; --i) {
                N /= a;
            }
        }
   
#endif // POWER_2
		
}