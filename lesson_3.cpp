#include <iostream>
#include <cmath>;
using namespace std;
int main() {
    cout << "So chia het cho 3 va 5 la: "<< endl;
    for(int i = 10 ;i <=30; i++ ) {
        if (i % 5 == 0 && i % 3 == 0) {
            cout << i <<" " ;
    }
}
// Tu 1 den 20 tim ra so dau tien chia het cho 7(chi in ra so dau tien do)
    for (int j = 1 ; j<= 20; j++) {
        if (j % 7 == 0) {
            cout<<"So chia het cho 7 la " << j <<endl;
            break;
        }
    }
// tu khoa continue: bo qua phan con lai cua vong lap hien tai va chuyen ngay sang vong lap ke tiep
    for (int k = 1; k <= 5;k++) {
        if (k == 3) {
            continue;
        }
        cout <<k <<endl;

    }
    // Viet chuong trinh kiem tra 1 so co phai so nguyen to hay khong
    bool isprime = true;
    int number = 21;
    for (int l = 2; l <= sqrt(number);l++) {
        if (number % l == 0) {
            isprime = false;
            cout <<number << "khong phai la so nguyen to ";
            break; // tiết kiệm vòng lặp
        }

    }
    if(isprime) {
        cout << number <<"la so nguyen to ";
    }



    return 0;
}