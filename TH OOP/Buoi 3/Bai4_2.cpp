#include <iostream>
using namespace std;

class Frac{
    private:
        float a, b;
    public:
        Frac();
        Frac(float a, float b);
        void input();
        void output();
        bool operator>(Frac f);
        Frac operator=(Frac f);
};
Frac::Frac(){
    this->a = 0;
    this->b = 1;
}
Frac::Frac(float a, float b){
    this->a = a;
    this->b = b;
}
void Frac::input(){
    cout << "\nNhap tu: " <<endl; cin >> a;
    do{
        cout << "\nNhap mau: "<<endl; cin >> b;
        if(b == 0)
            cout<<"Sai dieu kien phan so..."<<endl;
    }while(b == 0);
}
void Frac::output(){
    if(a == 0 || b == 1)
        cout<<a<<endl;
    else cout<<a<<"/"<<b<<endl;
}
bool Frac::operator>(Frac f){
    float ps1 = this->a / this->b;
    float ps2 = f.a / f.b;
    return ps1>ps2;
}
Frac Frac::operator=(Frac f){
    this->a = f.a;
    this->b = f.b;
    return *this;
}

int main(){
    
}