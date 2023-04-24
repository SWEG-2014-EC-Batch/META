#include <iostream>
using namespace std;

int main() {
    // Get a number from the user
    int num;
    cout <<"Welcome to the number checker program \n Enter a number: ";
    cin >> num;

    // Count the number of divisors of the input number
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    // If the input number has exactly two divisors (i.e., it is prime)
    if (count == 2) {
        cout<<"The number "<<num<<" is a prime number"<<endl;
        // Print all prime numbers smaller than or equal to the input number
        cout << "The prime numbers smaller than or equal to " << num << " are: ";
        int sum = 0;
        int counter2 = 0;
        for (int i = 2; i <= num; i++) {
            int counter = 0;
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    counter++;
                }
            }
            if (counter == 2) {
                sum += i;
                counter2++;
                cout << i << " ";
            }
        }
      // Calculate and print the average of the prime numbers
        float average = sum / counter2;
        cout << endl << "The average is: " << average;
    } else {
        // Print all prime divisors of the input numbers
        cout << "The prime divisors are: ";
        for (int i = 1; i <= (num / 2); i++) {
            int count_i = 0;
            if (num % i == 0) {
                for (int j = 1; j <= i; j++) {
                    if (i % j == 0) {
                        count_i++;
                    }
                }
                if (count_i == 2) {
                    cout << i << " ";
                }
            }
        }
    }

    return 0;
}
