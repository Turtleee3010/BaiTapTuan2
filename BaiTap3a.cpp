#include <iostream>
using namespace std;

class PHANSO
{
    int T, M;

public:
    PHANSO Rutgon();
    void NhapPhanSo();
    void XuatPhanSo();
    void XuatPhanSoRutGon();
};
void PHANSO::NhapPhanSo()
{
    cout << "Nhap tu so: ";
    cin >> this->T;
    do
    {
        cout << "Nhap mau so: ";
        cin >> this->M;
        if (this->M == 0)
            cout << "Khong hop le, vui long nhap lai: ";
    } while (this->M == 0);

    if (this->M < 0)
    {
        this->T = -this->T;
        this->M = -this->M;
    }
}

void PHANSO::XuatPhanSo()
{
    cout << "Phan so ban dau: " << this->T << "/" << this->M << endl;
}

void PHANSO::XuatPhanSoRutGon()
{
    cout << "Phan so da duoc rut gon: " << this->T << "/" << this->M << endl;
}
PHANSO PHANSO::Rutgon()
{
    int a, b;
    PHANSO ps;
    ps.T = this->T;
    ps.M = this->M;
    a = abs(ps.T);
    b = abs(ps.M);

    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    ps.T = this->T / a;
    ps.M = this->M / b;
    return ps;
}

int main()
{
    PHANSO ps, psrg;
    ps.NhapPhanSo();
    ps.XuatPhanSo();
    psrg = ps.Rutgon();
    psrg.XuatPhanSoRutGon();

}
