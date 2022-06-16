using namespace std;
#include<iostream>
#include<math.h>
int main()
{
	int a,i,derajat;
	float hasil,hasil1,x,koef[6],koef1[6];
	cout << "Masukan derajat tertinggi dari persamaan : ";
	cin >> derajat;
	cout << "Masukan nilai x : ";
	cin >> x;
	for (i=derajat;i>=0;i--)
	{
		cout << "Masukan koef dari x^" << i << " : ";
		cin >> koef[i];
	}
	cout << "Persamaan yang anda masukan adalah :\n ";
	cout << "f(X) = ";
	hasil=0;
	for (i=derajat;i>=1;i--)
	{
		cout<<koef[i] << "x^" << i << " + ";
		hasil+=(koef[i]*pow(x,i));
	}
	cout << koef[0] << "\n";
	hasil+=koef[0];
	cout << "f("<<x<<") : " << hasil << endl;
	
	cout << endl;
	cout << "Turunan dari persamaan adalah : " << endl;
	cout << "f`(x) = ";
	hasil1=0;
	for (a=derajat-1;a>=1;a--)
	{
		koef1[a]=koef[a+1]*(a+1);
		cout << koef1[a] << "x^" <<a << " + ";
		hasil1+=(koef1[a]*pow(x,a));
	}
	cout << koef[1] << endl;
	hasil1+=koef[1];
	cout <<"f`(" << x << ") : " << hasil1 <<endl;
}
