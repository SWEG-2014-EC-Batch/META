#include <iostream>
#include <cmath>
int main(){
    int choice;
    std::cout << "Welcome" << '\n' << "Please select the digit manipulation you wish to perform: " << '\n' << '\n';
    startpoint:
    std::cout << "To check whether a number is an Armstrong number, press 1" << '\n'
              << "To count the number of digits a number has, press 2" << '\n'
              << "To reverse the digits of a number, press 3" << '\n'
              << "To find the sum of the digits of a number, press 4" << '\n'
              << "To find the product of the even digits of a number, press 5" << '\n'
              << "To find the first and last digits of a number and the sum thereof, press 6" << '\n'
              << "To swap the first and last digits of a number, press 7" << '\n'
              << "To check whether a number is perfect, press 8" << '\n'
              << "To check whether a number is a palindrome, press 9" << '\n'
              << "To check whether a number is strong, press 10" << '\n' << '\n'
              << "Input choice: ";
    std::cin >> choice;
    if(choice == 1){
        int inputNumber = 0;
        int digitCubeSum = 0;
        std::cout << "Input number whose \"Armstrongness\" to check: ";
        std::cin >> inputNumber;
        int inputNumberPrintableCopy = inputNumber;
        if(inputNumber > 999){
            std::cerr << "Error: Armstrong numbers have at most three digits." <<std::endl;
            goto choicepoint;
        }
        while(inputNumber != 0){
            digitCubeSum += pow(inputNumber%10,3);
            inputNumber = inputNumber/10;
        }
        if(inputNumberPrintableCopy == digitCubeSum){
            std::cout << inputNumberPrintableCopy << " is an Armstrong number.";
        }
        else{
            std::cout << inputNumberPrintableCopy << " is not an Armstrong number.";
        }
    }
    else if(choice == 2){
        long long int inputNumber = 0;
        std::cout << "Enter integer the number of whose digits to count: ";
        std::cin >> inputNumber;
        //the number of digits a numeral has can be found using the formula floor(log10(inputNumber)+1)
        std::cout << inputNumber << " has " << floor(log10(inputNumber)+1) << " digit(s).";
    }
    else if(choice == 3){
        int inputNumber = 0;
        int reversedNumber = 0;
        std::cout << "Input number whose digits to reverse: ";
        std::cin >> inputNumber;
        int inputNumberPrintableCopy = inputNumber;
        while(inputNumber != 0){
            reversedNumber *= 10; //multiplying the reversedNumber variable by 10 places a zero at its end, basically allowing us to add single digits to the end of the output. 
            reversedNumber += inputNumber%10; //adding the input number modulo 10 to the reversedNumber variable effectively means adding the input's final digit to it.
            inputNumber = inputNumber/10; //once the process is done, divide the inputNumber by 10 to expose the next digit
        }
        std::cout << inputNumberPrintableCopy << " with digits reversed is " << reversedNumber << ".";
    }
    else if(choice == 4){
        int inputNumber = 0;
        int digitSum = 0;
        std::cout << "Enter number whose digit sum to find: ";
        std::cin >> inputNumber;
        int inputNumberPrintLater = inputNumber; //because we'll be doing math operations that change inputNumber, we'll use a variable to hold its original value.
        while (inputNumber != 0){
            digitSum += (inputNumber%10); //this adds the last digit of the inputNumber to the digitSum.
            inputNumber = inputNumber/10; //we divide inputNumber by 10 to expose the next digit.
        }
        std::cout << inputNumberPrintLater << "'s digit sum is " << digitSum << "."; //we print inputNumberPrintLater because inputNumber has been reduced to 0.
    }
    else if(choice == 5){
        int inputNumber = 0;
        int productNumber = 1;
        std::cout << "Enter number whose even digit product to find: ";
        std::cin >> inputNumber;
        int inputNumberPrintCopy = inputNumber; //because we'll be doing math operations that change inputNumber, we'll use a variable to hold its original value to print later.
        while (inputNumber != 0){
            if((inputNumber%10)%2==0){
                productNumber *= inputNumber%10;
            }
            inputNumber = inputNumber/10; //we divide inputNumber by 10 to expose the next digit.
        }
        if(productNumber == 1 && inputNumberPrintCopy != 0){
            std::cout << "No even digits found. Their product is therefore irrelevant.";
        }
        else if(inputNumberPrintCopy == 0){
            std::cout << "The \"product\" of the one even digit of 0 is 0.";
        }
        else{
            std::cout << "The product of the even digits of " << inputNumberPrintCopy << " is " << productNumber << ".";
        }
    }
    else if(choice == 6){
        int inputNumber = 0;
        int firstDigit = 0;
        int finalDigit = 0;
        std::cout << "Insert number whose first and last digits, and the sum thereof, to find: ";
        std::cin >> inputNumber;
        int inputNumberPrintCopy = inputNumber;
        while(inputNumber != 0){
            if(inputNumber == inputNumberPrintCopy){
                finalDigit += inputNumber%10;
            }
            if(inputNumber/10 == 0){
                firstDigit = inputNumber;
            }
            inputNumber = inputNumber/10;
        }
        std::cout << "The first digit of " <<inputNumberPrintCopy << " is " << firstDigit << " while its last digit is " << finalDigit << ". Their sum is " << firstDigit + finalDigit << ".";
    }
    else if(choice == 7){
        int inputNumber = 0;
        int numberSwapped = 0; //this is the inputNumber but with the first and final digits swapped
        int inputNumberPrintableCopy; //this is the inputNumber which will actually be displayed since operations will change inputNumber itself
        int numberSwappedMinuend = 0; //numberSwappedMinuend is inputNumber with first and last digits swapped, but with everything in between 0
        int numberSwappedMinuendOperationalCopy; //this is to numberSwappedMinuend as inputNumberPrintableCopy is to inputNumber
        int numberSwappedSubtrahend = 0; //this is inputNumber with everything between the first and last digits equaling 0; numberSwappedMinuend's reverse
        /*
        the idea here is to add inputNumber and numberSwappedMinuend together, and take away numberSwappedSubtrahend. 
        this works to give us inputNumber with swapped extreme digits, and this is provable by example:
        say inputNumber = 52341. numberSwappedMinuend thus equals 10005. numberSwappedSubtrahend thus equals 50001.
        52341 + 10005 - 50001 = 12345.
        */
        std::cout << "Input number whose first and last digits to swap: ";
        std::cin >> inputNumber;
        inputNumberPrintableCopy = inputNumber;
        while(inputNumber != 0){ 
            numberSwappedMinuend *= 10;
            if(inputNumber/10 == 0 || inputNumber == inputNumberPrintableCopy){ //because of this condition, this loop only "captures" the first and last digits of inputNumber
                numberSwappedMinuend += inputNumber%10;
            }
            inputNumber = inputNumber/10;
        }
        numberSwappedMinuendOperationalCopy = numberSwappedMinuend;
        while(numberSwappedMinuend != 0){ //this loop works to swap the digits of numberSwappedMinuend using principles described elsewhere.
            numberSwappedSubtrahend *= 10;
            numberSwappedSubtrahend += numberSwappedMinuend%10;
            numberSwappedMinuend = numberSwappedMinuend/10;
        }
        numberSwapped = ((numberSwappedMinuendOperationalCopy + inputNumberPrintableCopy) - numberSwappedSubtrahend);
        std::cout << inputNumberPrintableCopy << " with swapped first and final digits is " << numberSwapped << ".";
        if(inputNumberPrintableCopy%10 == inputNumberPrintableCopy){std::cout << " This task is trivial.";}
    }
    else if(choice == 8){
        long long int checkedNum = 0;
        long long int leastFactor = 1;
        long long int factorSum = 1;
        std::cout << "Insert number whose perfectness to check: ";
        std::cin >> checkedNum;
        if(checkedNum <= 2){
            std::cout << checkedNum << " is not perfect.";
        }
        else{
            for(long long int i=2; i<checkedNum; i++){
                if(leastFactor==1 && checkedNum%i==0){
                    leastFactor=checkedNum;
                    factorSum += i;
                }
                else if(checkedNum%i==0){
                    factorSum += i;
                }
                else if(leastFactor==1 && i>checkedNum/2){
                    std::cout << checkedNum << " is not perfect. It is in fact prime.";
                }
            }
        }
        if(factorSum == checkedNum){
            std::cout << checkedNum << " is perfect.";
        }
        else{
            std::cout << checkedNum << " is not perfect.";
        }
    }
    else if(choice == 9){
        int inputNumber = 0;
        int reversedNumber = 0;
        std::cout << "Input number whose palindromeness to check: ";
        std::cin >> inputNumber;
        int inputNumberPrintableCopy = inputNumber;
        while(inputNumber != 0){
            reversedNumber *= 10; 
            reversedNumber += inputNumber%10; 
            inputNumber = inputNumber/10;
        }
        if(inputNumberPrintableCopy == reversedNumber){
            std::cout << inputNumberPrintableCopy << " is a palindrome.";
        }
        else{
            std::cout << inputNumberPrintableCopy << " is not a palindrome.";
        } 
    }
    else if(choice == 10){
        int inputNumber = 0;
        int digitFactorialSum = 0;
        std::cout << "Input number whose \"strength\" to check: ";
        std::cin >> inputNumber;
        int inputNumberPrintableCopy = inputNumber;
        while(inputNumber != 0){
            digitFactorialSum += inputNumber%10*tgamma(inputNumber%10);
            inputNumber = inputNumber/10;
        }
        if(inputNumberPrintableCopy == digitFactorialSum){
            std::cout << inputNumberPrintableCopy << " is a Strong number.";
        }
        else{
            std::cout << inputNumberPrintableCopy << " is not a Strong number.";
        }
    }
    else{
        std::cerr << "Error: Invalid choice entered. Please try again." << std::endl;
    }
    choicepoint:
    char confirmation;
    std::cout << std::endl << "Try again (Y/N)? ";
    std::cin >> confirmation;
    if(tolower(confirmation) == 'y'){
        std::cout << std::endl;
        goto startpoint;
    }
    else{
        return 0;
    }
}
