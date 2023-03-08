#include <iostream>

using namespace std;

//class DATE
//{
//
//public:
//	int D, M, Y;
//	void NhapNgayThangNam();
//    DATE CheckNhuan(DATE a)
//    {
//        DATE date;
//        date.Y = a.Y;
//        return ((date.Y % 4 == 0 && date.Y % 100 != 0) || date.Y % 400 == 0);
//    }
//	DATE SoNgayTrongThang(DATE a)
//    {
//        switch (a.M)
//        {
//        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
//        {
//            return 31;
//            break;
//        }
//        case 2:
//        {
//            if (CheckNhuan(DATE a))
//            {
//                return 29;
//            }
//            return 28;
//        }
//        case 4:case 6:case 9:case 11:
//        {
//            return 30;
//        }
//        }
//    }
//};
//
//void DATE::NhapNgayThangNam()
//{
//	do
//	{
//		cout << "Nhap ngay: ";
//		cin >> this->D;
//	}
//}
//int main()
//{
//	DATE d1;
//    cout << "Nhap ";
//	return 0;
//}
void NhapNgayThangNam(int d, int m, int y)
{
	cout << "Nhap ngay: ";
	cin >> d;
	cout << "Nhap thang: ";
	cin >> m;
	cout << "Nhap nam: ";
	cin >> y;
}

int CheckNhuan(int y)
{
	return ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0);

}

int SoNgayTrongThang(int m, int y)
{
	switch (m)
	{
		case 1:case 3: case 5: case 7: case 8: case 10: case 12:
		{
			return 31;
			break;
		}
		
		case 2:
		{
			if (CheckNhuan(y) return 29;
			return 28;
		}

		case 4: case 6: case 9: case 11:
		{
			return 30;
		}
	}
}

void NgayKeTiep(int d. int m, int y)
{

}