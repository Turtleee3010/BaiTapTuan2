#include <iostream>

using namespace std;

int CheckNhuan(int y)
{
    return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);
}

int SoNgayTrongThang(int m, int y)
{
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    {
        return 31;
        break;
    }

    case 2:
    {
        if (CheckNhuan(y))
            return 29;
        return 28;
    }

    case 4:
    case 6:
    case 9:
    case 11:
    {
        return 30;
    }
    }
}

void NgayKeTiep(int d, int m, int y)
{
    int nd = d, nm = m, ny = y;
    if (y > 0 && m > 0 && m < 13 && d > 0 && d <= (SoNgayTrongThang(m, y)))
    {
        nd = nd + 1;
        if (d == SoNgayTrongThang(m, y) && m == 12)
        {
            nd = 1;
            ny = y + 1;
            nm = 1;
        }
        else if (d == SoNgayTrongThang(m, y))
        {
            nd = 1;
            nm = m + 1;
        }
    }
    cout << "\nNgay ke tiep la: " << nd << "/" << nm << "/" << ny;
}

int main()
{
    int d, m, y;
    do
    {
        cout << "Nhap ngay: ";
        cin >> d;
        cout << "Nhap thang: ";
        cin >> m;
        cout << "Nhap nam: ";
        cin >> y;
    } while (y < 0 || m < 1 || m > 12 || d < 0 || d > (SoNgayTrongThang(m, y)));
    NgayKeTiep(d, m, y);

    return 0;
}
