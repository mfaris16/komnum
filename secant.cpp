#include <iostream>

using namespace std;

int main()
{
    float x1, x2, x3, y1, y2, toleransi;
    int iterasi;
    cout << "Masukkan X1 : ";
    cin >> x1;
    cout << "Masukkan X2 : ";
    cin >> x2;
    toleransi = 1;
    iterasi = 0;
    x3 = 0;
    while (toleransi > 0.0001)
    {
        cout << "Iterasi " << iterasi << endl;
        cout << "X2 = " << x2 << endl;
        cout << "X3 = " << x3 << endl;
        y1 = (2 * x1 * x1) + (4 * x1) - 30;
        y2 = (2 * x2 * x2) + (4 * x2) - 30;
        x3 = (-(y1 * x2) + (y2 * x1)) / (y2 - y1);
        cout << "X3 = " << x3 << endl;
        toleransi = (2 * x3 * x3) + (4 * x3) - 30;
        if (toleransi < 0)
        {
            toleransi *= -1;
        }
        cout << "Toleransi = " << toleransi << endl;
        x1 = x2;
        x2 = x3;
        iterasi++;
    }
    cout << "Akar Persamaan = " << x3 << endl;
}
