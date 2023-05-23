//Trần Thị Minh Ánh - 6151071001
//Nguyễn Phạm Thành Hưng - 6151071056
//Bùi Thị Yến Lưu - 6151071011
#include <iostream>
using namespace std;
class SinhVien{
    private:
        string HoTen;
        float DVan;
        float DToan;
    public:
        static int stt;
        SinhVien(); 
        SinhVien(string HoTen, float DVan, float DToan); 
        SinhVien(string HoTen); 
        SinhVien(const SinhVien &sv);
        ~SinhVien();
        friend istream& operator >> (istream &is, SinhVien &sv);
        friend ostream& operator << (ostream &os, SinhVien sv);
        bool operator < (SinhVien sv);
        bool operator > (SinhVien sv);
        bool operator == (SinhVien sv);
        bool operator <= (SinhVien sv);
        bool operator >= (SinhVien sv);
        bool operator != (SinhVien sv);
        SinhVien operator = (SinhVien sv);
        float DiemTB();
};

int SinhVien::stt=1;

SinhVien::SinhVien(){
    HoTen = "TRAN THI MINH ANH";
    DVan = 10;
    DToan = 10;
}
SinhVien::SinhVien(string HoTen, float DVan, float DToan){
    this->HoTen = HoTen;
    this->DVan = DVan;
    this->DToan =DToan;
}
SinhVien::SinhVien(string HoTen){
    this->HoTen = HoTen;
    DVan = 0;
    DToan = 0;
}
SinhVien::SinhVien(const SinhVien &sv){
    HoTen = sv.HoTen;
    DVan = sv.DVan;
    DToan = sv.DToan;
}
SinhVien::~SinhVien(){
}
float SinhVien::DiemTB(){
    return ((DVan+DToan) / 2);
}
istream& operator >> (istream& is, SinhVien &sv){
    cout << "Nhap ho va ten: ";
    getline(is, sv.HoTen);
    cout << "Nhap diem mon van: ";
    cin >> sv.DVan;
    cout << "Nhap diem mon toan: ";
    cin >> sv.DToan;
    return is;
}
ostream& operator << (ostream& os, SinhVien sv){
    os << "Ho va  ten: " << sv.HoTen << endl;
    os << "Diem mon van: " << sv.DVan << endl;
    os << "Diem mon toan: " << sv.DToan << endl;
    return os;
}

bool SinhVien::operator < (SinhVien sv){
    if(DiemTB() < sv.DiemTB())
        return true;
    else
        return false;
}

bool SinhVien::operator > (SinhVien sv){
    if(DiemTB() > sv.DiemTB())
        return true;
    else
        return false;
}

bool SinhVien::operator <= (SinhVien sv){
    if(DiemTB() <= sv.DiemTB())
        return true;
    else
        return false;
}

bool SinhVien::operator >= (SinhVien sv){
    if(DiemTB() >= sv.DiemTB())
        return true;
    else
        return false;
}

bool SinhVien::operator != (SinhVien sv){
    if(DiemTB() != sv.DiemTB())
        return true;
    else
        return false;
}
SinhVien SinhVien::operator = (SinhVien sv){
    *this = sv;
    return *this;
}
void Xuat(SinhVien sv){
    cout << sv;
}
int main(){
    SinhVien sv[3];
    SinhVien stt;
    cout<<"======NHAP THONG TIN SINH VIEN========\n";
    for(int i=0;i<3;i++){
        cout<<"Stt "<<stt.stt<<":"<<endl;
        stt.stt++;
        cin>>sv[i];
        fflush(stdin);
    }
    stt.stt=1;
    cout<<"\n=======SINH VIEN DA NHAP LA========\n";
    for(int i=0;i<3;i++){
        cout<<"Stt "<<stt.stt<<":"<<endl;
        stt.stt++;
        cout<<sv[i];
    }
}
