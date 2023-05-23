#include<iostream>
#include<math.h>
using namespace std;
class PhanSo{
    private:
        int tu, mau;
    public:
        void Nhap();
        void Xuat();
        PhanSo Cong(PhanSo p);
        PhanSo Tru(PhanSo p);
        PhanSo Nhan(PhanSo p);
        PhanSo Chia(PhanSo p);
        void Lam_Tron(PhanSo p1,PhanSo p2);
};
void PhanSo::Nhap(){
    cout<<"Nhap tu so: ";
    cin>>tu;
    do{
        cout<<"Nhap mau so: ";
        cin>>mau;
        if(mau==0){
            cout<<"Mau so phai khac 0. Vui long kiem tra lai!";
        }
    }while(mau==0);
}
void PhanSo::Xuat(){
    cout<<tu<<"/"<<mau<<endl;
}
PhanSo PhanSo::Cong(PhanSo p){
    PhanSo t;
    t.tu=tu*p.mau+mau*p.tu;
    t.mau=mau*p.mau;
    return t;
}
PhanSo PhanSo::Tru(PhanSo p){
    PhanSo t;
    t.tu=tu *p.mau - p.tu*mau;
    t.mau=mau*p.mau;
    return t;
}
PhanSo PhanSo::Nhan(PhanSo p){
    PhanSo t;
    t.tu=this->tu*p.tu;
    t.mau=this->mau*p.mau;
    //float t=(float)(tu*p.tu)/(mau*p.mau);
    return t;
}
PhanSo PhanSo::Chia(PhanSo p){
    PhanSo t;
    t.tu=tu*p.mau;
    t.mau=mau*p.tu;
    return t;
}
void PhanSo::Lam_Tron(PhanSo p1,PhanSo p2){
    PhanSo t;
    float LamTron=0;
    //Lam tron tong
    t.tu=p1.tu*p2.mau+p1.mau*p2.tu;
    t.mau=p1.mau*p2.mau;
    LamTron=float(t.tu/t.mau);
    cout<<"Lam tron tong: "<<roundf(LamTron * 100);
    //Lam tron hieu
    t.tu=p1.tu *p2.mau - p1.tu*p2.mau;
    t.mau=p1.mau*p2.mau;
    LamTron=float(t.tu/t.mau);
    cout<<"Lam tron hieu: "<<roundf(LamTron * 100);
    //Lam tron tich
    t.tu=p1.tu*p2.tu;
    t.mau=p1.mau*p2.mau;
    LamTron=float(t.tu/t.mau); 
    cout<<"Lam tron tich: "<<roundf(LamTron * 100);
    //Lam tron thuong
    t.tu=p1.tu*p2.mau;
    t.mau=p1.mau*p2.tu;
    LamTron=float(t.tu/t.mau);
    cout<<"Lam tron tich: "<<roundf(LamTron * 100);
}
int main(){
    PhanSo ps1,ps2,ps3;
    cout<<"Moi ban nhap: "<<endl;
    cout<<"Phan so 1:"<<endl;
    ps1.Nhap();
    cout<<"Phan so 2:"<<endl;     
    ps2.Nhap();
    cout<<"Phan so ban vua nhap: "<<endl;
    cout<<"Phan so 1:"<<endl;
    ps1.Xuat();
    cout<<"Phan so 2:"<<endl;     
    ps2.Xuat();
    cout<<"Tong hai phan so la: ";
    ps3=ps1.Cong(ps2);            //gop: (ps1.Cong(ps2)).Xuat();
    ps3.Xuat();                   //
    cout<<"Hieu hai phan so la: ";
    ps3=ps1.Tru(ps2);
    ps3.Xuat();
    cout<<endl<<"Tich hai phan so la:";
    ps3=ps1.Nhan(ps2);
    ps3.Xuat();
    cout<<endl<<"Thuong hai phan so la: ";
    ps3=ps1.Chia(ps2);
    ps3.Xuat();
    ps3.Lam_Tron(ps1,ps2);
    return 0;
}
