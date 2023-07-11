#include <iostream>
#include <fstream>
using namespace std;

void readFile(char* fileName, int arr[], int* count) {
    ifstream file(fileName);
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }

    *count = 0;
    while (file >> arr[*count]) {
        (*count)++;
    }

    file.close();
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int count;

    readFile("data.txt", arr, &count);

    cout << "Number of entries: " << count << endl;
    for (int i = 0; i < count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
