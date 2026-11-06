#include <iostream>
using namespace std;
int main() {
//  Bai tap: Gia su 1 be A sinh ngay 29/2/2020.Hoi tu nam sinh den nam 2069 be A duoc to chuc sinh nhat dung ngay bao nhieu lan?
// Viet chuong trinh tra loi cau hoi tren
// Kiem tra tu nam 2020 - 2069 co bao nhieu nam nhuan ? thi co bay nhieu lan to chuc sinh nhat dung ngay
int count = 0;
for (int birthday = 2020; birthday <= 2069; birthday++) {
    if ((birthday % 4 == 0 && birthday % 100 != 0) || (birthday % 400 == 0)) {
        cout<< birthday <<" la nam nhuan " << endl;
        count++;
    }
}
cout <<"So lan to chuc sinh nhat dung ngay la: "<< count;
return 0;

}