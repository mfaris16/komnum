#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, derajat;
    float hasil, hasil1, x, koef[6], koef1[6];
    float a, b, c, fa, fb, fc, toleransi;
    int iterasi;

    cout << "Masukkan Nilai A : ";
    cin >> a;
    cout << "Masukkan Nilai B : ";
    cin >> b;

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

    toleransi = 1;
    iterasi = 0;
    while (toleransi > 0.000005)
    {
        c = (a + b) / 2;

        fa = 0;
        for (i = derajat; i >= 1; i--)
        {
            fa += (koef[i] * pow(a, i));
        }
        fa += koef[0];

        fb = 0;
        for (i = derajat; i >= 1; i--)
        {
            fb += (koef[i] * pow(b, i));
        }
        fb += koef[0];

        fc = 0;
        for (i = derajat; i >= 1; i--)
        {
            fc += (koef[i] * pow(c, i));
        }
        fc += koef[0];

        if ((fc * fb) > 0)
            b = c;
        else
            a = c;
        toleransi = a - b;
        if (toleransi < 0)
            toleransi = toleransi * -1;
        iterasi++;
    }

    cout << "Jumlah iterasi : " << iterasi << endl;
    cout << "Akar persamaan : " << a << endl;
}
