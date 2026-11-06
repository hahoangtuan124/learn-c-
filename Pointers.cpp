#include <iostream>
using namespace std;
int main() {
    const int NUMBER_COINS = 5;
    int count;
    double coins[NUMBER_COINS] = {0.2,0.05,0.35,0.5,3.4};
    double *ptr;
    ptr = coins;
    cout <<"Mang cua coins la: " << endl; // dung cach thong thuong
    for(int count = 0;count < NUMBER_COINS;count++) {
        cout << ptr[count]<< " " << endl;
        }
    cout <<"Mang cua coins la " << endl; // giong ket qua o tren 
    for(int count = 0; count < NUMBER_COINS ;count++) {
        cout << *(coins + count) <<" ";
    }


        const int MY_COINS = 8;
        double coins2[MY_COINS] = {5,10,15,20,25,30,35,40};
        int count2 = 0;
        double *ptr2;
        ptr2 = coins2;
        cout <<"So phan tu lan dau tien la " << endl;
        for(int count2 = 0; count2 < MY_COINS ;count2++) {
            cout <<*ptr2 <<" " ;
            ptr2++;
        }
        // Khi vòng lặp đầu tiên kết thúc, con trỏ không tự động quay về vị trí ban đầu,
        // nó vẫn giữ nguyên vị trí cuối cùng đó (trỏ ra khỏi mảng một ô bộ nhớ)
        cout <<"So phan tu thu 2 la " << endl;
        for (int count2 = 0;count2 < MY_COINS; count2++) {
            ptr2--;
            cout <<*ptr2 <<" ";
            // Do đó vòng lặp thứ 2 kế thừa trạng thái hiện tại của ptr2 nên ptr2-- ở 
            // vòng lặp này có thể đưa trỏ về vị trí cuối cùng(40) và tiếp tục lùi dần
            
        }
        

        return 0;


    }


