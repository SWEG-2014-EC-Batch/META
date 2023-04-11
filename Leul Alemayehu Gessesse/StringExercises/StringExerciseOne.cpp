#include <iostream>
#include <string.h>
int main(){
    char testAns[] = {"A B C D A B C D A B C D A B C"};
    char testTakerAnswers[30];
    int mark = 0;
    std::cout << "Input all 15 answers in order, with a single space between each pair of answers: \n";
    gets (testTakerAnswers);
    for(int i = 0 ; i < 30 ; i += 2){
        if (testAns[i] == testTakerAnswers[i]) mark++;
    }
    std::cout << "The student's score is " << mark;
}
