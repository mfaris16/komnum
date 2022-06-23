#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, i, derajat;
    float hasil, hasil1, x, koef[6], koef1[6];
    float x1, x2, x3, y1, y2, toleransi;
    int iterasi;
    cout << "Masukkan Nilai X1 : ";
    cin >> x1;
    cout << "Masukkan Nilai X2 : ";
    cin >> x2;

    cout << "Masukkan derajat tertinggi dari persamaan : ";
    cin >> derajat;
    for (i = derajat; i >= 0; i--)
    {
        cout << "Masukkan koef dari x^" << i << " : ";
        cin >> koef[i];
    }
    cout << "Persamaan yang anda masukkan adalah :\n ";
    cout << "f(x) = ";

    for (i = derajat; i >= 1; i--)
    {
        cout << koef[i] << "x^" << i << " + ";
    }
    cout << koef[0] << "\n";
    cout << endl;

    toleransi = 2;
    iterasi = 1;
    x3 = 0;
    while (toleransi > 0.0001)
    {

        y1 = 0;
        for (i = derajat; i >= 1; i--)
        {
            y1 += (koef[i] * pow(x1, i));
        }
        y1 += koef[0];

        y2 = 0;
        for (i = derajat; i >= 1; i--)
        {
            y2 += (koef[i] * pow(x2, i));
        }
        y2 += koef[0];

        x3 = (-(y1 * x2) + (y2 * x1)) / (y2 - y1);

        toleransi = 0;
        for (i = derajat; i >= 1; i--)
        {
            toleransi += (koef[i] * pow(x3, i));
        }
        toleransi += koef[0];

        if (toleransi < 0)
        {
            toleransi *= -1;
        }

        x1 = x2;
        x2 = x3;

        iterasi++;
    }
    cout << "Akar persamaan : " << x3 << endl;
    cout << "Toleransi = " << toleransi << endl;
    cout << "Jumlah Iterasi " << iterasi << endl;
}
