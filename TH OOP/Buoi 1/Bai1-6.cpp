#include<iostream>

using namespace std;

class Phanso
{
    private:
        int tuso;
        int mauso;
    public:
        void nhap();
        Phanso()
        {
        tuso = mauso = 1;
        }
        Phanso(int a, int b)
        {
        tuso = a;
        mauso = b;
        }
        void in();
        friend inline bool operator>(const Phanso &h1, const Phanso &h2);
};

void Phanso::nhap()
{
    do
    {
        cout<<"Nhap tu so, mauso: ";
        cin>>this->tuso>>this->mauso;
        if(this->mauso == 0)
        cout<<"Nhap lai mauso"<<endl;
    }while(this->mauso == 0);
}

void Phanso::in()
{
    cout<<"Phan so: "<<this->tuso<<"/"<<this->mauso<<endl;
}
bool operator>(const Phanso &h1, const Phanso &h2)
{
    float a,b;
    a = float(h1.tuso/h1.mauso);
    b = float(h2.tuso/h2.mauso);
    if(a>b) return 1;
    else return 0;
}

int main()
{
    Phanso *p, tmp;
    int n;
    cout <<"Nhap vao gia tri cua n: ";
    cin >> n;
    p = new Phanso[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"Nhap phan so thu "<<i+1<<": "<<endl;
        p[i].nhap();
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(p[i] > p[j]){
                tmp = p[i];
                p[i] = p[j];
                p[j] = tmp;
            }
        }
    }
    cout << "Mang sap xep tang dan la: ";
    for(int i=0; i<n; i++)
        p[i].in();
    system("pause");
}