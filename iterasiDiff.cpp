#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, i, derajat;
    float hasil, hasil1, x, koef[6], koef1[6];
    float x1, x2, toleransi;
    int iterasi;

    cout << "Masukkan X1 : ";
    cin >> x1;

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
    x2 = 0;
    while (toleransi > 0.00001)
    {

        hasil = 0;
        for (i = derajat; i >= 1; i--)
        {
            hasil += (koef[i] * pow(x1, i));
        }
        hasil += koef[0];

        hasil1 = 0;
        for (a = derajat - 1; a >= 1; a--)
        {
            koef1[a] = koef[a + 1] * (a + 1);
            hasil1 += (koef1[a] * pow(x1, a));
        }
        hasil1 += koef[1];

        x2 = x1 - ((hasil) / hasil1);

        toleransi = (x2 - x1);
        if (toleransi < 0)
        {
            toleransi *= -1;
        }

        x1 = x2;
        iterasi++;
    }
    cout << "Akar Persamaan = " << x2 << endl;
    cout << "Iterasi " << iterasi << endl;
    cout << "Toleransi = " << toleransi << endl;
}
