using namespace std;
#include <iostream>
int main()
{
    float a, b, c, fa, fb, fc, toleransi;
    int iterasi;
    cout << "Masukkan Nilai A : ";
    cin >> a;
    cout << "Masukkan Nilai B : ";
    cin >> b;
    toleransi = 1;
    iterasi = 0;
    while (toleransi > 0.000005)
    {
        c = (a + b) / 2;
        fa = (a * a) - a - 6;
        fb = (b * b) - b - 6;
        fc = (c * c) - c - 6;
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
