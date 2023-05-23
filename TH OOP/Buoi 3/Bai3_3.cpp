#include <iostream>
using namespace std;

class MatHang{
    protected:
        string Ten;
    public:
        virtual void input()=0;
        virtual void output()=0;
};
class MayTinh : public MatHang{
    private:
        int Tocdo;
    public:
        void input();
        void output();
};
void MayTinh::input(){
    cout<<"Nhap ten mat hang: "<<endl;
    getline(cin, Ten);
    cout<<"Nhap toc do cua may tinh: "<<endl;
    cin>>Tocdo;
}
void MayTinh::output(){
    cout<<"Ten mat hang: "<<Ten<<endl;
    cout<<"Toc do may tinh: "<<Tocdo<<endl;
}
class MayIn : public MatHang{
    private:
        int DPI;
    public:
        void input();
        void output();
};
void MayIn::input(){
    cin.ignore(1);
    cout<<"Nhap ten mat hang: "<<endl;
    getline(cin, Ten);
    cout<<"Nhap DPI: "<<endl;
    cin>>DPI;
}
void MayIn::output(){
    cout<<"Ten mat hang: "<<Ten<<endl;
    cout<<"DPI: "<<DPI<<endl;
}
int main(){
    MatHang *Computer = new MayTinh;
    MatHang *In = new MayIn;
    Computer->input();
    Computer->output();
    In->input();
    In->output();
    system("pause");
    return 0;
}