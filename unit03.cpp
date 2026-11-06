#include <iostream>
using namespace std;
int main() {
    // mang la 1 tap hop cac gia tri cung kieu du lieu trong 1 bien duoc luu tru ở cac ô nhớ lien tiep nhau trong bo nho cua may tinh 
    // moi 1 phan tu trong mang duoc dinh danh bang 1 chỉ số (index) begin từ 0 đến n- 1 (với n là số lượng phần tử của mảng)
    int numbers[9] = {3,4,7,5,6,2,8,9,1};
    // tinh tong cac so le va chan trong mang
    // tinh trung binh cong cac so chan va le trong mang
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;
    for(int i = 0; i < 9; i++ ) {
        if(numbers[i] % 2 == 0) {
            count3++;
            count1 += numbers[i];
        } else count4++;
        count2 += numbers[i];
    }
    cout << "Tong cac so chan trong mang la: " << count1 << endl;
    cout << "Tong cac so le trong mang la: "<< count2<< endl;
    cout <<"Trung binh cong cac so chan la: " <<(double)count1/count3 << endl;
    cout << "Trung binh cong cac so le la: " << count2/count4;



    return 0;
}