#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Complex{
    private:
        float phanthuc ,phanao;
    public:
        Complex(){
        phanthuc=0; phanao=0;
        }
        void input(){
        cout<<"Moi nhap phan thuc: ";
        cin>>phanthuc;
        cout<<"Moi nhap phan ao: ";
        cin>>phanao;
        }
        void output(){
            if (phanao<0) cout<<phanthuc<<phanao<<"*i";
            else cout<<phanthuc<<"+"<<phanao<<"*i";
        }
        friend Complex operator +(Complex a,Complex b);
        friend Complex operator -(Complex a,Complex b);
};
Complex operator +(Complex a,Complex b){ 
    Complex c;
    c.phanthuc=a.phanthuc+b.phanthuc;
    c.phanao=a.phanao+b.phanao;
    return c;
}
Complex operator -(Complex a,Complex b){ 
    Complex c;
    c.phanthuc=a.phanthuc-b.phanthuc;
    c.phanao=a.phanao-b.phanao;
    return c;
}
int main(){
    Complex x,y;
    cout<<"Nhap so phuc 1:"<<endl;
    x.input();
    cout<<"\nNhap so phuc 2:"<<endl;
    y.input();
    cout<<"\nTong 2 so phuc = ";
    (x+y).output();
    cout<<"\n";
    cout<<"\nHieu 2 so phuc = ";
    (x-y).output();
    getch();
}