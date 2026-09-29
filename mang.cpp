#include <iostream>
using namespace std;
void nhapmang(int a[],int n) {
    for(int i =0;i<n;i++) {
        cout<<"Mang a["<<i<<"]:";
        cin >>a[i];
    } 
}
void xuatmang(int a[],int n) {
    cout<<"Mang a la: ";
    for(int i =0;i<n;i++) {
        cout <<a[i];
    }
}
int tongmang(int a[],int n) {
    int s = 0;
    for (int i=0;i<n; i++) {
        s+=a[i];
    }
    return s;
}
double tbmang(int a[],int n) {
    if(n == 0){
    return 0;}
    return (double(tongmang(a,n)))/n;
    
    
}

const int N = 100;
int main() {
    int a[N];
    int n;
    cout <<"Nhap vao n";
    cin >> n;
    nhapmang(a,n);
    xuatmang(a,n);
    cout <<tongmang(a,n)<< endl;
    cout << tbmang(a,n);


    return 0;


}
