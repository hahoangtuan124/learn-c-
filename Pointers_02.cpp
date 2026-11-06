#include <iostream>
using namespace std;


// dùng con trỏ để hoán đổi giá trị của 2 số

void swap(int *p1,int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout <<p1 <<"  " <<p2; // địa chỉ của number1 và number2
    cout <<*p1 <<" " <<*p2;
}
int main() {
    int number1 = 3;
    int number2 = 4;
    swap(&number1,&number2);
    return 0;

}