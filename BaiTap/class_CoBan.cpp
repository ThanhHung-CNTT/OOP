#include<iostream>

using namespace std;


class SinhVien{
    private:
        string hoten;
        char gioitinh[5];
        int ngay, thang, nam;
        int diemtb;
    public:
        void nhap();
        void xuat();
};

void SinhVien::nhap(){
    cout<< "Nhap ho ten: ";
    cin>>hoten;
    fflush(stdin);
    cout<<"Nhap gioi tinh: ";
    cin>>gioitinh;
    cout<<"Nhap ngay thang nam sinh: ";
    cin>>ngay>>thang>>nam;
    cout<<"Nhap diem tb: ";
    cin>>diemtb;
}
void SinhVien::xuat(){
    cout<<"\nHo ten: "<<hoten;
    cout<<"\n"<<"Gioi tinh: "<<gioitinh;
    cout<<"\n"<<"Ngay thang nam sinh: "<<ngay<<"/"<<thang<<"/"<<nam;
    cout<<"\n"<<"Diem trung binh: "<<diemtb;
}
int main(){
    SinhVien sv;
    sv.nhap();
    sv.xuat();
}
