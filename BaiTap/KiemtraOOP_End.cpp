#include<iostream>
#include<vector>
using namespace std;

class MH{
    private:
        string tmh;
        int sl;
        float dg;
    public:
        void Nhap();
        void In();
        float tien(){
            return sl*dg;
        }
};

void MH::Nhap(){
    cout<<"Nhap ten mat hang: ";
    fflush(stdin);
    getline(cin,tmh);
    cout<<"Nhap so luong: ";
    cin>>sl;
    cout<<"Nhap don gia (VND/san pham): ";
    cin>>dg;
}

void MH::In(){
    cout<<"-Ten mat hang: "<<tmh<<endl;
    cout<<"\t+So luong san phan: "<<sl<<endl;
    cout<<"\t+Don gia: "<<dg<<" VND/san pham"<<endl;
}

class HD{
    private:
        string thd;
        int slmh;
        vector<MH *> MatHang;
    public:
        void nhap();
        void In();
        float tongt();
        string Get_thd(){
            return thd;
        }
};


void HD::nhap(){
    cout<<"Nhap ten hoa don: ";
    fflush(stdin);
    getline(cin,thd);
    cout<<"Nhap so luong mat hang: ";
    cin>>slmh;
    MH *mh;
    for(int i=0;i<slmh;i++){
        cout<<"\tMat hang "<<i+1<<"."<<endl;
        mh= new MH;
        mh->Nhap();
        MatHang.push_back(mh);
    }
    cout<<endl;
}



void HD::In(){
    cout<<"\nTen Hoa don: "<<thd<<endl;
    cout<<"So luong mat hang: "<<slmh<<endl;
    cout<<"Danh sach cac mat hang: "<<endl;
    for(int i=0;i<slmh;i++){
        MatHang.at(i)->In();
        cout<<"\t+Gia mat hang: "<<MatHang.at(i)->tien()<<" VND"<<endl;
    }
    cout<<"Thanh tien: "<<tongt()<<" VND"<<endl;
}

float HD::tongt(){
    float tien;
    for(int i=0;i<slmh;i++){
        tien=tien+MatHang.at(i)->tien();
    }
    return tien;
}



class DanhSachHD{
    private:
        vector<HD *> Hoa_Don;
        int sl;
    public:
        void NhapDS();
        void XuatDS();
        void MaxHoaDon();
        void TimKiem();
};

void DanhSachHD::NhapDS(){
    cout<<"\nNhap so luong hoa don: ";
    cin>>sl;
    cout<<endl;
    HD *hoadon;
    for(int i=0;i<sl;i++){
        cout<<"Hoa Don "<<i+1<<":"<<endl;
        hoadon= new HD;
        hoadon->nhap();
        Hoa_Don.push_back(hoadon);
    }
}

void DanhSachHD::XuatDS(){
    cout<<"=====Danh Sach Hoa Don====="<<endl;
    for(int i=0;i<sl;i++){
        cout<<"Hoa don "<<i+1<<"."<<endl;
        Hoa_Don.at(i)->In();
        cout<<endl;
    }
}

void DanhSachHD::MaxHoaDon(){
    float TienMax=0;
    int vitrimax;
    cout<<"\nHOA DON NHIEU TIEN NHAT LA: "<<endl;
    for(int i=0;i<sl;i++){
        if(Hoa_Don.at(i)->tongt()>TienMax){
            TienMax=Hoa_Don.at(i)->tongt();
            vitrimax=i;
        }
    }
    Hoa_Don.at(vitrimax)->In(); 
}

void DanhSachHD::TimKiem(){
    string timkiem;
    int vitri=-1;
    cout<<"\n=====TIM HOA DON=====";
    cout<<"\nNhap ten hoa don can tim: ";
    fflush(stdin);
    getline(cin,timkiem);
    while(true){
        for(int i=0;i<sl;i++){
            if(timkiem==Hoa_Don.at(i)->Get_thd()){
                vitri=i;
                break;
            }
        }
        if(vitri!=-1){
            cout<<"Thong tin hoa don la: "<<endl;
            Hoa_Don.at(vitri)->In();
            exit(0);
        }
        else{
            cout<<endl;
            cout<<"Khong tim thay ten hoa don !!!"<<endl;
            cout<<"Vui long nhap lai ten: ";
            getline(cin,timkiem);
        }
    }
}

int main(){
    DanhSachHD ds;
    cout<<"=====NHAP THONG TIN HOA DON====="<<endl;
    ds.NhapDS();
    ds.XuatDS();
    ds.MaxHoaDon();
    ds.TimKiem();
}