#include <iostream>
using namespace std;
 int main () {
    //tao ra menu nhieu lua chon
    // chay lap di lap lai cho den khi nguoi dung chon thoat(bam so 0 tren ban phim)
    int choice;
    double number1,number2;
    do 
    {
      cout <<"=========MENU TINH TOAN==========" <<endl;
      cout <<"1.Tong cua 2 so " << endl;
      cout <<"2.Hieu cua 2 so " <<endl;
      cout <<"3.Tich cua 2 so " <<endl;
      cout <<"4.Thuong cua 2 so " <<endl;
      cout <<"Moi nhap lua chon " <<endl;
      cin >> choice;
      if (choice == 0) {
        cout <<"Thoat chuong trinh ";
        break;
      }
      cout << "Moi nhap so thu nhat: " << endl;
      cin >> number1;
      cout << "Moi nhap so thu hai: " << endl;
      cin >> number2;
      switch (choice) {
        case 1:
        cout << "Tong cua 2 so: " << number1 << " va " << number2 << " = " << number1 + number2 << endl;
        break;
        case 2:
        cout << "Hieu cua 2 so: " << number1 << " va " << number2 << " = " << number1 - number2 << endl;
        break;
        case 3:
        cout << "Tich cua 2 so: " << number1 << " va " << number2 << " = " << number1 * number2 << endl;
        break;
        cout << "Thuong cua 2 so: " << number1 << " va " << number2 << " = " << number1 / number2 << endl;
        
        default:
        cout << "Lua chon cua ban khong hop le ";
      }
    


    } while (choice != 0);
    return 0;
 }