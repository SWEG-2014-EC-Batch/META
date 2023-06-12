#include <iostream>
int main(){
    int inputNumber;
    int numberSwapped; //this is the inputNumber but with the first and final digits swapped
    int inputNumberPrintableCopy; //this is the inputNumber which will actually be displayed since operations will change inputNumber itself
    int numberSwappedMinuend = 0; //numberSwappedMinuend is inputNumber with first and last digits swapped, but with everything in between 0
    int numberSwappedMinuendOperationalCopy; //this is to numberSwappedMinuend as inputNumberPrintableCopy is to inputNumber
    int numberSwappedSubtrahend = 0; //this is inputNumber with everything between the first and last digits equaling 0; numberSwappedMinuend's reverse
    /*
    the basic idea here is to add inputNumber and numberSwappedMinuend together, and take away numberSwappedSubtrahend. 
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
    return 0;
}