//an application that reads an integer number N and check if it is prime number or not. 
//If the number is prime then the program prints out the average value of prime numbers between 1 and N. 
//Otherwise the program should find and prints out all prime factors of inputted number N. 
//1 is to be considered prime.
#include <iostream>
#include <cmath>
#include <iomanip>
bool isPrime(long long int n){
    /*
    a simple but highly efficient primality test can be figured out by doing some basic math and probabilistic reasoning.
    first we should rule out all multiples of 2 and 3 but the primes 2 and 3 themselves, freeing ourselves from having to do calculations
    for most numbers (multiples of 2 are 50% of numbers, and multiples of 3 are 33.33% of numbers, and the intersection contains 16.66% of numbers)
    so by simply ruling out multiples of those two numbers, we are required to do the "real" test for "only" a third of all integers.
    the "real" test relies on the fact that all primes greater than 3 are a multiple of 6 plus or minus 1. (5 = 6*1 - 1, 7 = 6*1 + 1, 11 = 6*2 -1, &c.)
    of course, some composite numbers are also 1 away from a multiple of 6 (35 = 6*6 - 1), but we are certain that any number that is NOT 1 away
    from a multiple of 6 is composite.
    */
    if (n == 2 || n == 3){
        return true;
    }
    if (n <= 1 || n % 2 == 0 || n % 3 == 0){
        return false;
    }
    for (int i = 5; i * i <= n; i += 6){
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
int main(){
    long long int checkedNum;
    long double primeCounter = 0;
    long double primeSum = 0;
    long double prePrimeAverage = 0;
    long long int smallestPrimeFactor = 0; //there cannot be a prime factor greater than (checkedNum/smallestPrimeFactor)
    long long int primeFactorCounter = 0;
    bool isCheckedNumPrime = true;
    std::cout << "Input number to check primality: ";
    std::cin >> checkedNum;
    long double checkedNumDivisionCopy = checkedNum; //this is a copy of the checkedNum variable used in division operations
    std::cout << std::endl;
    if(isPrime(checkedNum)){
        std::cout << checkedNum << " is prime." << std::endl << std::endl;
        for(int i = 1 ; i < checkedNum ; i++){
            if(isPrime(i)){
                primeSum += i;
                primeCounter++;
            }
        }
        if(primeCounter == 0){
            std::cout << "Because there are no prime numbers between 1 and " << checkedNum << ", an average value for them cannot be found.";
        }
        else{
            prePrimeAverage = primeSum/primeCounter;
            std::cout << "The number of primes between 1 and " << checkedNum << " exclusive is " << primeCounter << ", inclusive is " << primeCounter + 1 << std::endl;
            std::cout << "The average value of the primes between 1 and " << checkedNum << " exclusive is " << std::setprecision(10) << prePrimeAverage << std::endl;
            std::cout << "The ratio of this average with " << checkedNum << " is " << std::setprecision(10) << prePrimeAverage/checkedNumDivisionCopy << std::endl;
            std::cout << "The average value of the primes between 1 and " << checkedNum << " inclusive is " << std::setprecision(10) << (primeSum+checkedNum)/(primeCounter+1) << std::endl;
        }
    }
    else{
        for (int i = 2 ; i <= checkedNum/2 ; i++){
            if(isPrime(i) && checkedNum%i == 0){
                if(primeFactorCounter == 0){
                    smallestPrimeFactor = i; //because the program goes from the bottom-up, the first prime factor found has to be the smallest
                    std::cout << "The program has found the following prime factor(s): " << std::endl;
                }
                std::cout << i << std::endl;
                primeFactorCounter++;
            }
            if(primeFactorCounter > 0 && i > checkedNum/smallestPrimeFactor){
                    break;
            }
        }
    }
}