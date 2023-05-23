#include <iostream>
#include <string>
using namespace std;

class SV{
    protected:
        string lop, hoten;
    public:
        virtual void input()=0;
        virtual void output()=0;
};
class SVSP : public SV{
    private:
        string hocbong;
    public:
        void input();
        void output();
};

void SVSP::input(){
    cout<<"Nhap lop hoc: "<<endl;
    getline(cin, lop);
    cout<<"Nhap ho va ten: "<<endl;
    getline(cin, hoten);
    cout<<"Nhap hoc bong: "<<endl;
    getline(cin, hocbong);
}
void SVSP::output(){
    cout<<"Lop hoc: "<<lop<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Hoc bong: "<<hocbong<<endl;
}

class SVTC : public SV{
    private: 
        long int hocphi;
    public:
        void input();
        void output();
};

void SVTC::input(){
    cout<<"Nhap lop hoc: "<<endl;
    getline(cin, lop);
    cout<<"Nhap ho va ten: "<<endl;
    getline(cin, hoten);
    cout<<"Nhap hoc phi: "<<endl;
    cin>>hocphi;
}
void SVTC::output(){
    cout<<"Lop hoc: "<<lop<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Hoc phi: "<<hocphi<<endl;
}

int main(){
    SV *svsp = new SVSP;
    SV *svtc = new SVTC;
    svsp->input();
    svsp->output();
    svtc->input();
    svtc->output();
    system("pause");
    return 0;
}