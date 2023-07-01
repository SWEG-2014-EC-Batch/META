#include <iostream>

using std::cout;
using std::cin;

struct coordinates
{
    double x;
    double y;
};

coordinates readCoords();

void printCoords(coordinates);

int main()
{
    coordinates location = readCoords();
    printCoords(location);
}

coordinates readCoords()
{
    coordinates point;
    cout << "\nInput x-coordinate: ";
    cin >> point.x;
    cout << "\nInput y-coordinate: ";
    cin >> point.y;
    return point;
}

void printCoords(coordinates point)
{
    std::cout << "\nCoordinates are (" << point.x << "," << point.y << ")";
}