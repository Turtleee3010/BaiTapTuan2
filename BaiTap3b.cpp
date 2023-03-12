#include <iostream>
using namespace std;

class PHANSO
{

public:
    int T, M;
    void NhapPhanSo();
    void XuatPhanSo();

};
void PHANSO::NhapPhanSo()
{
    cout << "\tNhap tu so: ";
    cin >> this->T;
    do //Nhập mẫu số để mẫu khác 0
    {
        cout << "\tNhap mau so: ";
        cin >> this->M;
        if (this->M == 0)
            cout << "Khong hop le, vui long nhap lai: ";
    } while (this->M == 0);

    if (this->M < 0) // Nếu mẫu âm thì đổi dấu tử mẫu
    {
        this->T = -this->T;
        this->M = -this->M;
    }
}

void SoSanh(PHANSO a, PHANSO b)
{
    float x, y;
    x = float(a.T) / float(a.M); //tìm giá trị của phân số 1
    y = float(b.T) / float(b.M); //tìm giá trị của phân số 2
     if (x > y) cout << "Phan so thu 1 lon hon phan so thu 2";
        else if (x < y) cout << "Phan so thu 2 lon hon phan so thu 1";
            else cout << "2 phan so bang nhau"; 

}

void PHANSO::XuatPhanSo()
{
    cout << this->T << "/" << this->M << endl;
}


int main()
{
    PHANSO ps1, ps2;
    cout << "Nhap phan so thu 1: \n";
    ps1.NhapPhanSo();
    cout << "Nhap phan so thu 2: \n";
    ps2.NhapPhanSo();
    cout << "Phan so thu 1: " ;  ps1.XuatPhanSo();
    cout << "Phan so thu 2: " ;  ps2.XuatPhanSo();
    SoSanh(ps1, ps2);
}
