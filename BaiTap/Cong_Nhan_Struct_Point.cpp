#include <iostream>
#include <string.h>
using namespace std;

struct Cn{
    char ten[50];
    int namsinh;
    int gio_lam;
};
void nhap(Cn *cn){
    fflush (stdin);
    cout<< "Ho va ten: ";
    gets(cn->ten);
    cout<< "Nam sinh: ";
    cin>> cn->namsinh;
    cout << "So gio lam: ";
    cin >> cn->gio_lam;
}
void xuat(Cn *cn){
    fflush(stdin);
    cout<<"Ho va ten: "<< cn->ten<< endl;
    cout<< "Nam sinh: "<< cn->namsinh<< endl;
    cout << "So gio lam: "<< cn->gio_lam<< endl;
}
void nhap(Cn *&ds , int &n){
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
	ds = new Cn[n];
    for(int i=0; i<n; i++){
        cout<< "Cong nhan thu "<< i+1 << endl;
        nhap(&*(ds+i));
    }
}
void xuat(Cn *ds, int n){
    for(int i=0; i<n; i++){
        cout<< "Cong nhan thu "<< i+1<< endl;
        xuat(&*(ds+i));
    }
}
void sapxeptheoGio(Cn *ds, int n){
    Cn tam;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((ds+i)->gio_lam > (ds+j)->gio_lam){
                tam = *(ds+i);
                *(ds+i)=*(ds+j);
                *(ds+j)=tam;
            }
        }
    }
}
int main(){
    Cn *ds;
    int n;
    nhap(ds, n);
    cout<< "Danh sach cong nhan"<< endl;
    xuat(ds, n);
    sapxeptheoGio(ds, n);
    cout<< "Danh sach da sap xep"<< endl;
    xuat(ds, n);
    delete[] ds
	;
}
