#include<iostream>
#include<conio.h>
using namespace std;

class mydate{
    private:
        int d,m,y;
    public:
        mydate(int dd=0,int mm=0,int yy=0){
            d=dd; m=mm; y=yy;
        }
        void nhap();
        void xuat();
        friend bool operator >=(mydate &m1,mydate &m2);
};

void mydate::nhap(){
    cout<<"Nhap ngay: ";
    cin>>this->d;
    cout<<"Nhap thang: ";
    cin>>this->m;
    cout<<"Nhap nam: ";
    cin>>this->y;
}

void mydate::xuat(){
        cout<<this->d<<" - "<<this->m<<" - "<<this->y;
}

bool operator >=(mydate &m1,mydate &m2){
    if (m1.y>m2.y) return true;
    if (m1.y==m2.y&&m1.m>m2.m) return true;
    if (m1.y==m2.y&&m1.m==m2.m&&m1.d>=m2.d) return true;
    return false;
};

int main(){
    mydate D[5];
    for(int i=0;i<5;i++){
        cout<<"Enter Date: "<<i+1<<"\n";
        D[i].nhap();
        cout<<endl;
    }
    mydate max=D[0];
    for(int i=1;i<5;i++){
        if (D[i]>=max) max=D[i];
    }
    cout<<"\nDate Max: ";
    max.xuat();
    getch();
}