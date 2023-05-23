#include<iostream>
#include<string>
using namespace std;
class sinhvien{
    private:
        string msv, hoten, lop;
        int namsinh;
        float diemtb;
    public:
        friend istream & operator>>(istream &vao, sinhvien&sv);
        friend ostream& operator <<(ostream &ra, const sinhvien sv);
        bool operator > (sinhvien sv);
        //[], = hàm thành phần của lớp
        // còn lại có thể thiết kế hàm bạn
        bool operator < (sinhvien sv);
        float getDiemtb();
};
istream& operator >> (istream &vao, sinhvien &sv){
    cin.ignore();
    cout<<"Nhap ma sinh vien: ";
    fflush(stdin);
    getline(vao,sv.msv);
    // cin.ignore();
    cout <<"Nhap ho va ten: ";
    fflush(stdin);
    getline(vao,sv.hoten);
    // cin.ignore();
    cout<<"Lop: ";
    getline(vao, sv.lop);
    fflush(stdin);
    // cin.ignore();
    cout<<"Nam sinh: ";
    // fflush(stdin);
    vao>> sv.namsinh;
    cout <<"Diem trung binh: ";
    // fflush(stdin);
    vao>> sv.diemtb;
    return vao;
}
ostream& operator <<(ostream &ra, const sinhvien sv){
    ra<<"Ma sinh vien: "<<sv.msv<<endl;
    ra<<"Ho ten: "<<sv.hoten<<endl;
    ra<<"Lop: "<<sv.lop<<endl;
    ra<<"Nam sinh: "<<sv.namsinh<<endl;
    ra<<"Diem trung binh: "<<sv.diemtb<<endl;
    return ra;
}
float sinhvien::getDiemtb(){
    return diemtb;
}
bool sinhvien::operator >(sinhvien sv){
    if(diemtb>sv.diemtb)
        return true;
    else 
        return false;
}
bool sinhvien::operator <(sinhvien sv){
    if(namsinh>sv.namsinh)
        return true;
    else 
        return false;
}
void nhap(int n, sinhvien a[]){
    for(int i=0; i<n; i++){
        cout <<"Nhap sinh vien thu "<<i+1<<":"<< endl;
        cin>>a[i];
    }
}
void xuat(int n, sinhvien a[]){
    cout<<"*********************";
    for(int i=0; i<n; i++){
        cout <<"Sinh vien thu"<<i+1<<":"<<endl<<a[i]<<endl;
    }
}
void sapxepdtb(int n, sinhvien a[]){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[j]>a[i]){
                sinhvien t = a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    xuat(n, a);
}
void sapxepns(int n, sinhvien a[]){
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[j]<a[i]){
                sinhvien t = a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    xuat(n, a);
}
void thongke(int n, sinhvien a[]){
    int dem =0;
    for(int i=0; i<n; i++){
        if(a[i].getDiemtb()<1.0)
            dem++;
    }
    cout << dem;
}
int main(){
    sinhvien a[100];
    int n;
    // cout<<"Nhap sinh vien a: ";
    // cin>>a;
    // cout <<"Thong tin sinh vien a: ";
    // cout << a;
    cout<<"Nhap so sinh vien: ";
    cin>> n;
    nhap(n,a);
    xuat(n,a);
    cout<<"******************";
    sapxepdtb(n, a);
    cout<<"******************";
    sapxepns(n, a);
    cout<<a;
    return 0;
}