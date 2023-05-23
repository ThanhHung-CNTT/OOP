#include<iostream>
#include<string>
using namespace std;
class hocsinh{
    private:
        string hoten;
        float diem_toan, diem_van;
    public:
        void nhapten();
        string ten();
        void xuatten();
        void nhapdiem();
        void laydiem();
        float diemtb();
        void xeploai();
};

void hocsinh::nhapten(){
    cout<<"Nhap ho ten: ";
    getline(cin,hoten);
}
string hocsinh::ten(){
    return hoten;
}

void hocsinh::xuatten(){
    cout<<"\n===============\n";
    cout<<"Ho ten hs la: "<<ten();
}

void hocsinh::nhapdiem(){
    cout<<"Nhap diem van: ";
    cin>>diem_van;
    cout<<"Nhap diem toan: ";
    cin>>diem_toan;
}

void hocsinh::laydiem(){
    cout<<"\nDiem van: "<<diem_van<<"\nDiem toan: "<<diem_toan;
}

float hocsinh::diemtb(){
    return (diem_toan+diem_van)/2;
}

void hocsinh::xeploai(){
    cout<<"\n===============\n";
    if(diemtb()>=8){
        cout<<"Diem tb:"<<diemtb()<<"\tXep loai: Gioi";
    }else if(diemtb()<8 && diemtb()>=7){
        cout<<"Diem tb:"<<diemtb()<<"\tXep loai: Kha";
    }else if(diemtb()<7 && diemtb()>=5){
        cout<<"Diem tb:"<<diemtb()<<"\tXep loai: Tb";
    }else {
        cout<<"Diem tb:"<<diemtb()<<"\tXep loai: Yeu";
    }
}
int main(){
    hocsinh Hung;
    Hung.nhapten();
    Hung.ten();
    Hung.nhapdiem();
    Hung.xuatten();
    Hung.laydiem();
    Hung.diemtb();
    Hung.xeploai();
}