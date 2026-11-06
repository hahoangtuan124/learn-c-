#include <iostream>
using namespace std;
int main () {

    int n4 = 3;
    int n5 = 5;
    int n6 = (--n5) + (n4--) + (--n4) + (--n5) + (n4++);
    cout <<n6 << endl;
    //xử lý bài tập phương trình bậc nhất bằng if lồng nhau
    float a,b;
    cout <<"Moi nhap a: "<<endl;

    cin >> a;
    cout <<"Moi nhap b: " <<endl;
    cin >>b;
    if (a == 0) {
        if(b== 0) {
            cout <<"Phuong trinh co vo so nghiem ";
        }
        cout<<"Phuong trinh vo nghiem ";
 }else cout <<"result = " << -b/a;

    
    return 0;
}