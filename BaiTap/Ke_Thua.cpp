#include<iostream>
using namespace std;

class A{
    private:
        int x,y;
    public:
        A(int X,int Y);
        A();
        A(const A &n);
        ~A();
        friend istream& operator >> (istream &in, A &a);
        friend ostream& operator << (ostream &out, A a);
        bool operator > (A a);
        friend A operator +(A a, A b);
        int getX(){
            return x;
        }
        int getY(){
            return y;
        }
};

A::A(){
    this->x=0;
    this->y=0;
}
A::A(int X, int Y){
    this->x=X;
    this->y=Y;
}
A::A(const A &n){
    x=n.x;
    y=n.y;
}
A::~A(){
}
istream& operator >> (istream &in, A &a){
    cout<<"Nhap x = ";
    in>> a.x;
    cout<<"Nhap y = ";
    in>>a.y;
    return in;
}
ostream& operator << (ostream &out, A a){
    out<<"x= "<<a.x<<"\n"<<"y= "<<a.y<<endl;
    return out;
}
A operator+(A a, A b){
    A c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}
bool A::operator>(A a){
    return (x>a.x);
}

class B: public A{
    private:
        int z;
    public:
        B(int Z);
        B();
        B(const B &m);
        ~B();
        friend istream& operator >> (istream &in, B &b);
        friend ostream& operator << (ostream &out, B b);
        bool operator > (B b);
        friend B operator +(B b, B c);
};
B::B(){
    this->z=0;
}
B::B(int Z){
    this->z=Z;
}
B::B(const B &m){
    z=m.z;
}
B::~B(){
}
istream& operator >> (istream &in, B &b){
    A a;
    in>>a;
    cout<<"Nhap z: ";
    in>>b.z;
    return in;
}
ostream& operator << (ostream &out, B b){
    A a;
    out<<a;
    out<<"z= "<<b.z<<endl;
    return out;
}
B operator +(B b, B c){
    B a;
    a.z=b.z+c.z;
    return a;
}
bool B::operator>(B b){
    return (z>b.z);
}
int main(){
    B a,b,c;
    cout<<a;
    cout<<"Nhap thuoc tinh a: \n";
    cin>>a;
    cout<<"Xuat thuoc tinh a: \n";
    cout<<a;
    cout<<"Nhap thuoc tinh b: \n";
    cin>>b;
    cout<<"Xuat thuoc tinh b: \n";
    cout<<b;
    if(a>b){
        cout<<"x(a) > x(b)\n";
    }else{
        cout<<"x(b) > x(a)\n";
    }
    c=a+b;
    cout<<"Gia tri x,y cua c: \n "<<c;
    return 0;
}