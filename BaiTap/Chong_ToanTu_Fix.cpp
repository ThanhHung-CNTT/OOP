#include<iostream>
using namespace std;
class SinhVien{
    private:
        string MSSV, HoTen, Lop;
        int NamSinh;
        float DiemTB;
    public:
        //Bắt buộc là hàm thành phần: truy xuất, =
        //Bắt buộc là hàm bạn: Nhập, xuất
        friend istream& operator >>(istream &vao, SinhVien &sv);
        friend ostream& operator <<(ostream &ra, const SinhVien &sv);
        bool operator >(SinhVien sv);
        bool operator <(SinhVien sv);
        float getDiemTB();
};
float SinhVien::getDiemTB(){
    return this->DiemTB;
}
bool SinhVien::operator>(SinhVien sv1){
    if(DiemTB>sv1.DiemTB)
        return true;
    else
        return false;
}
bool SinhVien::operator<(SinhVien sv1){
    if(NamSinh<sv1.NamSinh)
        return true;
    else
        return false;
}   
istream &operator>>(istream &vao, SinhVien &sv){
    cout<<"Nhap MSSV: ";
    getline(vao,sv.MSSV);
    fflush(stdin); //Xoa bo nho dem   [ fflush(stdin); ]
    cout<<"Nhap ho ten: ";
    getline(vao,sv.HoTen);
    fflush(stdin);
    cout<<"Nhap lop: ";
    getline(vao,sv.Lop);
    fflush(stdin);
    cout<<"Nam sinh ";
    vao>>sv.NamSinh;
    cout<<"Nhap DTB: ";
    vao>>sv.DiemTB;
    return vao;
}
ostream& operator<<(ostream &ra, const SinhVien &sv){
    ra<<"MSSV: "<<sv.MSSV<<endl;
    ra<<"Ho ten: "<<sv.HoTen<<endl;
    ra<<"Lop: "<<sv.Lop<<endl;
    ra<<"Nam Sinh: "<<sv.NamSinh<<endl;
    ra<<"Diem TB: "<<sv.DiemTB<<endl;
    return ra;
}
void Nhap(int n, SinhVien a[]){
    for(int i=0;i<n;i++){
        cout<<"Nhap thong tin sv thu"<<i<<" : "<<endl;
        cin>>a[i];

    }
}
void Xuat(int n, SinhVien a[]){
    cout<<"\n************************"<<endl;
    for(int i=0;i<n;i++){
        cout<<"Sinh vien thu "<<i<<" : "<<endl<<a[i]<<endl;
    }
}
void SapXepDTB(int n, SinhVien a[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                SinhVien t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    Xuat(n,a);
}
void SapXepNS(int n,SinhVien a[]){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                SinhVien t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    Xuat(n,a);
}
void ThongKe(int n, SinhVien a[]){
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i].getDiemTB()<1){
            dem++;
        }
    }
    cout<<dem;
}
int main(){
    SinhVien a[100];
    int n;
    cout<<"Nhap so sv: ";
    cin>>n;
    Nhap(n,a);
    Xuat(n,a);
    return 0;
}