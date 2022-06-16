#include<iostream>0
#include<math.h>
using namespace std;
int main()
{
float x1,x2,toleransi;
int iterasi;
cout << "Masukkan X1 : ";
cin >> x1;
toleransi=1;
iterasi=0;
x2=0;
while (toleransi > 0.0001) {
cout << "Iterasi " << iterasi << endl;
cout << "X1 = " << x1 << endl;
x2=x1-((((2*x1*x1)-(10*x1)+12))/((4*x1)-10));
cout << "X2 : " << x2 << endl;
toleransi=(x2-x1);
if (toleransi<0)
{
toleransi*=-1;
}
cout << "Toleransi = " << toleransi << endl;
x1=x2;
iterasi++;
}
cout << "Akar Persamaan = " << x2 << endl;
}

