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
        Complex operator =(Complex sp);
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
Complex Complex::operator= (Complex sp){
	phanthuc=sp.phanthuc;
	phanao=sp.phanao;
}

int main(){
    Complex *Z, tong;
    int n;
    cout << "Nhap vao so luong phan tu n: ";
    cin >> n;
    Z = new Complex[n];
    for(int i=0;i<n;i++){
        cout<<"Nhap so phuc thu "<<i+1<<": "<<endl;
        Z[i].input();
    }
    for(int i=0; i<n; i++){
        tong = tong+Z[i];
    }
    cout<<"Tong cac so phuc = ";
    tong.output();
    cout<<endl;
    system("pause");
}