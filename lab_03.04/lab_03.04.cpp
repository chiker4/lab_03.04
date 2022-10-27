// Lab_03_4.cpp
// < Чикеречко Андрій >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 19

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double r;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "R = "; cin >> r;

    if ((y >= (-1 * x - 2 * r) && y <= 0 && x <= 0) ||
        !(y < sqrt((r - x) * (r + x))) && x >= 0 && x <= 2 * r && y >= 0 && y <= 2 * r) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    cin.get();
    return 0;
}