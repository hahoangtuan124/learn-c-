#include <iostream>
using namespace std;
int main() {
    // Cộng điểm thưởng và xét duyệt qua môn (Nâng cao) Nhập điểm thi của N sinh viên vào mảng. Cộng thêm điểm thưởng (ví dụ +0.5) cho tất cả sinh viên có điểm từ 4 đến dưới 5 (làm tròn lên đủ điểm qua môn). Sau đó duyệt lại mảng để in ra danh sách sinh viên đạt và không đạt.
    string name[10] = {"Tuan","Nam","Nhut","Nhu","Khang","Duyen","Quynh","Duc","Bao","Tu"};
    double point[10] = {9.5,7.8,5.6,3.5,4.5,5.0,4.0,4.5,6.7,9.7};
    for (int i = 0 ; i < 10; i++ ) {
        if (point[i] >= 4 && point[i] < 5) {
            point[i] =  point[i] + 0.5;
        }
    }
    for (int i = 0; i < 10; i++) {
        if (point[i] >= 5 ) {
            cout <<"Sinh vien " << name[i] << " diem: " << point[i] << " dat" << endl;


        } else cout <<"Sinh vien " << name[i] << " diem: " << point[i] << " khong dat" << endl;;
    }



    return 0;
}