#include <iostream>
using namespace std;

struct Points {
    double x, y;
};

Points readCoordinates() {
    Points p;
    cout << "Enter the x and y coordinates respectively: ";
    cin >> p.x >> p.y;
    return p;
}

void printCoordinates(Points p) {
    cout << "The coordinates are (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Points p = readCoordinates();
    printCoordinates(p);
    return 0;
}
