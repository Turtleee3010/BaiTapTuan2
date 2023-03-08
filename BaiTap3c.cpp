#include <iostream>
using namespace std;

class PHANSO
{

public:
    int T, M;
    void NhapPhanSo();
    void XuatPhanSo();
    PHANSO Rutgon();
    PHANSO Cong(PHANSO a, PHANSO b)
    {
        PHANSO p;
        p.T = a.T * b.M + a.M * b.T;
        p.M = a.M * b.M;
        return p;
    }

    PHANSO Tru(PHANSO a, PHANSO b)
    {
        PHANSO p;
        p.T = a.T * b.M - a.M * b.T;
        p.M = a.M * b.M;
        return p;
    }

    PHANSO Nhan(PHANSO a, PHANSO b)
    {
        PHANSO p;
        p.T = a.T * b.T;
        p.M = a.M * b.M;
        return p;
    }

    PHANSO Chia(PHANSO a, PHANSO b)
    {
        PHANSO p;
        p.T = a.T * b.M;
        p.M = a.M * b.T;
        return p;
    }
};

void PHANSO::NhapPhanSo()
{
    cout << "\tNhap tu so: ";
    cin >> this->T;
    do
    {
        cout << "\tNhap mau so: ";
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

void SoSanh(PHANSO a, PHANSO b)
{
    float x, y;
    x = float(a.T) / float(a.M);
    y = float(b.T) / float(b.M);
    if (x > y)
        cout << "Phan so thu 1 lon hon phan so thu 2";
    else if (x < y)
        cout << "Phan so thu 2 lon hon phan so thu 1";
    else
        cout << "2 phan so bang nhau";
}

void PHANSO::XuatPhanSo()
{
    if (this->T % this->M == 0)
        cout << this->T << endl;
    else if (this->T == 0)
        cout << 0 << endl;
    else
        cout << this->T << "/" << this->M << endl;
}

PHANSO PHANSO::Rutgon()
{
    int a, b;
    PHANSO ps;
    ps.T = this->T;
    ps.M = this->M;
    a = abs(ps.T);
    b = abs(ps.M);

    if (a == 0) return ps;
    else
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
    PHANSO ps1, ps2, psC, psT, psN, psCH, psCrg, psTrg, psNrg, psCHrg;
    cout << "Nhap phan so thu 1: \n";
        ps1.NhapPhanSo();
    cout << "Nhap phan so thu 2: \n";
        ps2.NhapPhanSo();
    cout << "Phan so thu 1: ";
        ps1.XuatPhanSo();
    cout << "Phan so thu 2: ";
        ps2.XuatPhanSo();

    cout << "Phep cong 2 phan so: ";
        psC = psC.Cong(ps1, ps2);
        psCrg = psC.Rutgon();
        psCrg.XuatPhanSo();
    cout << "\nPhep tru 2 phan so: ";
        psT = psT.Tru(ps1, ps2);
        psT.Rutgon();
        psT.XuatPhanSo();
    cout << "\nPhep nhan 2 phan so: ";
        psN = psN.Nhan(ps1, ps2);
        psNrg = psN.Rutgon();
        psNrg.XuatPhanSo();
    cout << "\nPhep chia 2 phan so: ";
        if (ps2.T == 0) cout << "Math Error"; 
        else
        {
            psCH = psCH.Chia(ps1, ps2);
            psCHrg = psCH.Rutgon();
            psCHrg.XuatPhanSo();
        }
    return 0;
}