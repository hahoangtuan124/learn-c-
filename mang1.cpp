#include <iostream>
using namespace std;
int main() {
    // Tinh chi tieu trong tuan
    double target[7] = {120,136,79,98,105,156,70};
    int count = 0;
    for (int i = 0; i < 7; i++) {
        count += target[i];

    }
    int max_target = target[0];
    for (int i = 0; i < 7; i++) {
        if (target[i] > target[0]) {
            max_target = target[i];
        }
    }
    int min_target = target[0];
    for (int i = 0 ; i< 7 ; i++) {
        if(target[i] < target[0]) {
            min_target = target[i];
        }
    }
    cout << "Tong chi tieu cua tuan la: " << count << endl;
    cout <<"Chi tieu trung binh moi ngay la: " << double(count/7) << endl;
    cout <<"Chi tieu cao nhat trong tuan la: " << max_target << endl;
    cout <<"Chi tieu thap nhat trong tuan la: " << min_target;







    return 0;
}