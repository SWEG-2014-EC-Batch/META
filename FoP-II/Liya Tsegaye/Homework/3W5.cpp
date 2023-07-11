#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("data3.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return -1;
    }

    int groupSize;
    while (file >> groupSize) {
        double sum = 0;
        for (int i = 0; i < groupSize; i++) {
            double num;
            file >> num;
            sum += num;
        }
        double average = sum / groupSize;
        cout << "Average of group: " << average << endl;
    }

    file.close();
    return 0;
}