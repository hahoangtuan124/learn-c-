#include <iostream>
#include <string>
using namespace std;
int main() {
    // tim hieu ve vong lap while
    // in ra bang cuu chuong
    int i = 1;
// vong lap while kiem tra dieu kien truoc neu thoa man moi thuc hien vong lap 
    while (i <= 10) {
        cout <<"5 * "<<i<<" = " <<5*i << endl;
        i++;
    }
    // tinh tong cac so tu nhien tu 1 den N : N la so tu nhien bat ki
    int sum = 0;
    int number;
    cout << "Moi nhap so: ";
    cin >> number;
    int j = 1;

    while (j <= number) {
        sum += j;
        j++;
    } cout << sum << endl;
// vong lap do ... while: vong lap kiem tra dieu kien sau (luon luon thuc hien it nhat 1 vong lap truoc roi sau do kiem tra lai dieu kien)
// kiem tra xem nguoi dung nhap mat khau dang nhap he thong co dung khong
    const string MY_PASSWORD = "Tuanha123@";
    string password;
    int count = 0;
    bool checkpass = true;
    do 
    {
        cout <<"Nhap mat khau: "<< endl;
        cin >> password;
        if(password != MY_PASSWORD) {
            cout <<"Mat khau khong dung vui long nhap lai " << endl;
            count++; // dem so lan nhap sai


        }
        if (count >= 3) {
            checkpass = false;
            break;
        }

    } while (password != MY_PASSWORD); 
    if (checkpass) {
    cout <<" Ban da dang nhap thanh cong";
    } else {
     cout <<"Ban da nhap qua so lan quy dinh tai khoan da bi khoa "<< endl;
    }
    // tinh giai thua cua 1 so tu nhien duong bat ki
    // use vong lap do... while
    int number2;
    cout<<"Moi nhap so giai thua: ";
    cin >> number2;
    do {
        int factorial = 1;
        for (int k = 1; k<number2;k++) {
        cout << number2 <<" ! = "<< factorial*(k-1);
        }
    } while ( < number2);

    return 0;
}