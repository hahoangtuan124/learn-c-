#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
struct payempoy {
    string name;
    double hours; // so gio lam viec 
    double Hourlypay; // tien luong theo gio
};


int main() {
    const int NUMBER = 3;
    payempoy workers[NUMBER];
    for(int i = 0; i < NUMBER; i++) {
        cout <<"Nhap ten nhan vien thu " <<i+1<< endl;
        getline(cin>>ws,workers[i].name); // getline: cho phép đọc trọn vẹn cả dòng bao gồm cả khoản trống
                        // cin>>ws:Tự động xóa sạch ký tự Enter hoặc khoảng trắng thừa còn sót lại ở lần nhập trước đó 
        cout <<"Nhap so gio lam viec cua nhan vien thu " <<i+1 <<endl;
        cin >>workers[i].hours;
        cout <<"Tien luong theo gio cua nhan vien thu " <<i+1 <<endl;
        cin>>workers[i].Hourlypay;

    }
    //Tính tông lương mà nhân viên làm được
    cout <<"Luong ma moi nhan vien nhan duoc la: " <<endl;
    cout << fixed <<showpoint << setprecision(2);
    double gross;
    for(int i= 0; i < NUMBER; i++) {

        gross = workers[i].hours * workers[i].Hourlypay;
        cout <<"Gross of employee   " << i + 1 << endl;
        cout << gross << endl;

    }



    return 0;
}