#include <iostream>
#include <cmath>
using namespace std;
// viet ham kiem tra xem 1 chuoi co phai la chuoi so hop le hay ko
bool is_number(const string & str) {

}

int main() {
// giai phuong trinh bac 2 he so nhap tu ban phim
cout <<"=======GIAI PTBAC2========" << endl;
double a,b,c;
cout <<"Moi nhap he so cua phuong trinh " << endl;
    cout <<"Moi nhap he so a: " << endl;
    cin >> a;
    cout << "Moi nhap he so b: "<< endl;
    cin >> b;
    cout <<"Moi nhap he so c: " << endl;
    cin >> c;
    if (a== 0) {
        // phuong trinh bac nhat
        cout <<"Day la phuong trinh bac nhat" << endl;


    } else {

double delta = (b*b) - (4*a*c);
if (delta < 0 ) {
    cout <<"Phuong trinh vo nghiem " << endl;
} else if (delta > 0) {
    cout <<"Phuong trinh co 2 nghiem phan biet: "<< endl;
    cout << "x1 = " << (-b + sqrt(delta))/2*a << endl;
    cout << "x2 = " << (-b - sqrt(delta))/2*a;
} else if (delta = 0 ) {
    cout <<"Phuong trinh co nghiem kep: ";
    cout << "x = " << -b/2*a;
}
    }









    return 0;
}