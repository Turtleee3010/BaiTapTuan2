#include <iostream>
#include <string>

using namespace std;

void NhapHS(int& mhs, char hs[50], double& dt, double& dv)
{
	cout << "Nhap ma hs: ";
	cin >> mhs;
	cout << "Nhap ho ten hoc sinh: ";
	cin.ignore();
	cin.getline(hs, 50);
	cout << "Nhap diem toan: ";
	cin >> dt;
	cout << "Nhap diem van: ";
	cin >> dv;
}

double dtb(double dt, double dv)
{
	double dtb;
	dtb = (dt + dv) / 2;
	return dtb;
}

void XuatHS(int mhs, char hs[50], double dt, double dv)
{
	cout << "\t\tTHONG TIN HOC SINH\t\t";
	cout << "\nMa hoc sinh: " << mhs;
	cout << "\nTen hoc sinh: " << hs;
	cout << "\nToan: " << dt << "\tVan: " << dv << "\tDiem tb: " << dtb(dt, dv);
}

int main()
{
	int mhs;
	char hs[50];
	double dt;
	double dv;
	NhapHS(mhs, hs, dt, dv);
	XuatHS(mhs, hs, dt, dv);

	return 0;
}