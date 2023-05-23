//Nguyen Pham Thanh Hung
//MSSV: 6151071056

#include <iostream>
using namespace std;

class PhanSo{
    private:
        int tu;
        int mau;
    public:
        void Nhap();
        void Xuat();
        int getTu(){
            return tu;
        }
        int getMau(){
            return mau;
        }
};
void PhanSo::Nhap(){
    cout << "Nhap tu so: ";
    cin >> tu;
    cout << "Nhap mau so: ";
    cin >> mau;
}
void PhanSo::Xuat(){
    cout << "Phan so: " << tu << "/" << mau << endl;
}

void Tong(PhanSo ps1, PhanSo ps2){
    int tu, mau;
    tu = ps1.getTu()*ps2.getMau() + ps1.getMau()*ps2.getTu();
    mau = ps1.getMau()*ps2.getMau();
    cout << "Tong 2 phan so: " << tu << "/" << mau << endl;
}
void Hieu(PhanSo ps1, PhanSo ps2){
    int tu, mau;
    tu = ps1.getTu()*ps2.getMau() - ps1.getMau()*ps2.getTu();
    mau = ps1.getMau()*ps2.getMau();
    cout << "Hieu 2 phan so: " << tu << "/" << mau << endl;
}

void Tich(PhanSo ps1, PhanSo ps2){
    int tu, mau;
    tu = ps1.getTu()*ps2.getTu();
    mau = ps1.getMau()*ps2.getMau();
    cout << "Tich 2 phan so: " << tu << "/" << mau << endl;
}

void Thuong(PhanSo ps1, PhanSo ps2){
    int tu, mau;
    tu = ps1.getTu()*ps2.getMau();
    mau = ps1.getMau()*ps2.getTu();
    cout << "Thuong 2 phan so: " << tu << "/" << mau << endl;
}

int main(){
    PhanSo ps1, ps2;
    ps1.Nhap();
    ps1.Xuat();
    ps2.Nhap();
    ps2.Xuat();
    Tong(ps1, ps2);
    Hieu(ps1, ps2);
    Tich(ps1, ps2);
    Thuong(ps1, ps2);
}