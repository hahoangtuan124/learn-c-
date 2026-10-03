#include <iostream>
using namespace std;

int main() {
    // kiem tra do dai 3 canh tao thanh tam giac
    double d,e,f;
    cout <<"Moi nhap 3 canh cua tam giac"<< endl;
    cin >>d>>e>>f;
    if(d+e > f && e+f > d && d + f > e) {
        cout <<"3 canh tao thanh tam giac" << endl;
    } else cout <<"3 canh khong tao thanh tam giac " <<endl;
    // kiem tra 1 nam duong lich co phai nam nhuan khong)
    int year;
    cout <<"Moi nhap nam: ";
    cin >> year;
    if ((year % 400==0) || (year %4==0 && year%100 != 0) ) {
        cout << year <<" la nam nhuan " << endl;
    } else cout <<year << " khong phai la nam nhuan " << endl;
    // viet chuong trinh kiem tra so chan le
    int number;
    cout <<"Moi nhap so ";
    cin >> number;
    if (number % 2== 0) {
        cout << number << " la so chan " << endl;
    } else cout << number <<" la so le ";
    // alias cua if .... else : ban chat khac cua if else
    int number1 = 9;
    int number2 = 10;
    int number3 = (number2 - number1 > number1 - number2) ? number1 : number2;
    // dung khi kq tra ve don gian k dai dong
    // toan tu dieu kien trong c++ (toan tu 3 ngoi)
    cout <<number3 << endl; 
    int a = 4;
    int b = 5;
    int c = (a % b > b % a) ? (a+b > b+a ? a : b) : (b - a > a - b  ? b : a);
    cout <<c;
    // bieu dien su dung lai if...else
    if (a % b > b % a) {
        if (a + b > b + a) {
            cout << a;

        } cout << b;


    } else if (b - a > a - b ) {
        cout << b;
    } cout <<a;


    return 0;

}