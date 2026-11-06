#include <iostream>
using namespace std;
int main () {
    int num1,num2;
    cout <<"Moi nhap so thu 1 " << endl;
    cin>>num1;
    cout <<"Moi nhap so thu 2 " << endl;
    cin >> num2;
    int tong = num1 + num2;
    int tru = num1 - num2;
    int nhan = num1*num2;
    int chia = num1/num2;
    int sodu = num1%num2;
    cout << "KET QUA " <<endl;
    cout <<num1<<" + " << num2 <<" = " <<tong << endl;
    cout <<num1<<" - " <<num2<< " = " <<tru <<endl;
    cout <<num1 <<" * " <<num2 << " = " <<nhan << endl;
    cout <<num1 << " / " << num2 << " = " <<chia <<endl;
    cout << num1 << " % " << num2 << " = " << sodu;

return 0;


}
    