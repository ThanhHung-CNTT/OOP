#include<iostream>
#include<string>
using namespace std;
struct CongNhan{
    string Ten;
    int NamSinh;
    float SoGioLam;
};
void Nhap(CongNhan *cn, int n){
    for(int i=0;i<n;i++)
	{
		cout<<"\t--Nhap vao thong tin cong nhan thu "<<i+1<<"--\n";
        cout<<"Nhap ten: ";
        fflush(stdin);
        getline(cin,(cn+i)->Ten); 
        cout<<"Nhap nam sinh: ";
        cin>>(cn+i)->NamSinh;
        cout<<"Nhap so gio lam:";
        cin>>(cn+i)->SoGioLam;
	}
}
void Xuat(CongNhan *cn,int n){
    for(int i=0; i<n; i++){
        cout<<"________________________________________________________"<<endl;
        cout<<"\t--Thong tin cong nhan thu"<<i+1<<"--\n";
        cout<<"Ho ten: "<<(cn+i)->Ten<<endl;
        cout<<"Nam sinh:"<<(cn+i)->NamSinh<<endl;
        cout<<"So gio lam: "<<(cn+i)->SoGioLam<<endl;
    }
}
void SapXepTheoGioLam(CongNhan *cn, int n){
    CongNhan temp;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((cn+i)->SoGioLam> (cn+j)->SoGioLam){
                temp= *(cn+i);
                *(cn+i)=*(cn+j);
                *(cn+j)=temp;
            }
        }
    }
    //Xuat(&cn,n);
}
int main(){
    int n;
    cout<<"Nhap so cong nhan: ";
    cin>>n;
    CongNhan *cn;
    cn=new CongNhan[n];
    Nhap(cn, n);
    Xuat(cn,n);
    SapXepTheoGioLam(cn,n);
    Xuat(cn,n);
}
