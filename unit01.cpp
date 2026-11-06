#include <iostream>
using namespace std;
int main() {
    // yeu cau: viet chuong trinh nhap vao diem so cua sinh vien (0 <= p <= 10)
    // Neu nhap sai bat nhap lai den khi hop le
    double point;
    cout <<"Moi nhap diem so cua sinh vien: ";
    cin >> point;
    do {
    if (point <= 10 || point >= 10) {
        cout <<"Diem so khong dung moi nhap lai";
    }
} while (point < 0 || point > 10);
return 0;
}
// Bai tap: Gia su 1 be A sinh ngay 29/2/2020.Hoi tu nam sinh den nam 2069 be A duoc to chuc sinh nhat dung ngay bao nhieu lan?
// Viet chuong trinh tra loi cau hoi tren
// Kiem tra tu nam 2020 - 2026 co bao nhieu nam nhuan la? thi co bay nhieu lan to chuc sinh nhat dung ngay ???