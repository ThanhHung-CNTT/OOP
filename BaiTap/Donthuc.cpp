#include<iostream>
#include<math.h>
using namespace std;
class Donthuc{
    public:
        void Nhap();
        void Xuat();
        void giatrix();
        void Daoham();
        void Nguyenham();
        int getHeso(){
            return heso;
        }
        int getMu(){
            return bac;
        }
    private:
        float heso;
        float bac;
        float x,y;

};
void Donthuc::Nhap(){
    cout<<"\nHe so = ";
    cin>>heso;
    cout<<"So mu = ";
    cin>>bac;
}
void Donthuc::Xuat(){
    cout<<"Don thuc da nhap: "<<heso<<"X"<<"^"<<bac;
}
void Donthuc::Daoham(){
    float a,b;
    a=heso*bac;
    b=bac-1;
    cout<<"\nDao ham la: "<<a<<"x^"<<b;
}
void Donthuc::Nguyenham(){
    float a,b;
    b=bac+1;
    a=heso/b;
    cout<<"\nNguyen ham la:"<<a<<"x^"<<b;
}
void Donthuc::giatrix(){
    cout<<"\nNhap gia tri x muon thay: ";
    cin>>x;
    y= heso*pow(x,bac);
    cout<<"Vay gia tri y = "<< y;
}
void Tong(Donthuc f1, Donthuc f2){
    float hs;
    cout<<"\nTong 2 don thuc = ";
    if(f1.getMu() == f2.getMu()){
        hs= f1.getHeso() + f2.getHeso();
        cout<<hs<<"x^"<<f1.getMu();
    }
    else{
        cout<<f1.getHeso()<<"x^"<<f1.getMu()<<"+"<<f2.getHeso()<<"x^"<<f2.getMu();
    }
}
void Tich(Donthuc f1, Donthuc f2){
    float hs,m;
    cout<<"\nTich 2 don thuc = ";
    hs= f1.getHeso()*f2.getHeso();
    m= f1.getMu()+f2.getMu();
    cout<<hs<<"x^"<<m;
}
void Hieu(Donthuc f1, Donthuc f2){
    float hs;
    cout<<"\nHieu 2 don thuc = ";
    if(f1.getMu() == f2.getMu()){
        hs= f1.getHeso() - f2.getHeso();
        cout<<hs<<"x^"<<f1.getMu();
    }
    else{
        cout<<f1.getHeso()<<"x^"<<f1.getMu()<<"-"<<f2.getHeso()<<"x^"<<f2.getMu();
    }
}
void Thuong(Donthuc f1, Donthuc f2){
    float hs,m;
    cout<<"\nThuong 2 don thuc = ";
    hs= f1.getHeso()/f2.getHeso();
    m= f1.getMu()-f2.getMu();
    cout<<hs<<"x^"<<m;
}

int main(){
    Donthuc f1,f2;
    float x,y;
    f1.Nhap();
    f1.Xuat(); 
    f1.Daoham();
    f1.Nguyenham();
    f1.giatrix();
    cout<<"\nLay he so: "<<f1.getHeso()<<"\tLay mu: "<<f1.getMu();
    f2.Nhap();
    f2.Xuat(); 
    Tong(f1,f2);
    Tich(f1,f2);
    Hieu(f1,f2);
    Thuong(f1,f2);
    system("pause");
}