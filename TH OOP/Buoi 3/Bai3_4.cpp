#include <iostream>
#include <string>
using namespace std;

class Printer{
    protected:
        string name;
    public:
        virtual void input(){}
        virtual void output(){}
        bool operator>(Printer p1);
};
bool Printer::operator>(Printer p1){
    if(this->name > p1.name)
        return true;
    return false;
}
class Laser : public Printer{
    private:
        int DPI;
    public:
        void input();
        void output();
};
void Laser::input(){
    cout<<"Nhap ten may in: "<<endl;
    getline(cin, name);
    cout<<"Nhap DPI: "<<endl;
    cin>>DPI;
}
void Laser::output(){
    cout<<"Ten may in: "<<name<<endl;
    cout<<"DPI : "<<DPI<<endl;
}
class ColorLaser : public Printer{
    private:
        int Color;
    public:
        void input();
        void output();
};
void ColorLaser::input(){
    cin.ignore(1);
    cout<<"Nhap ten may in: "<<endl;
    getline(cin, name);
    cout<<"Nhap mau sac: "<<endl;
    cin>>Color;
}
void ColorLaser::output(){
    cout<<"Ten may in: "<<name<<endl;
    cout<<"Mau sac: "<<Color<<endl;
}
int main(){
    Printer *laser = new Laser;
    Printer *colorlaser = new ColorLaser;
    laser->input();
    colorlaser->input();
    if(laser > colorlaser){
        colorlaser->output();
        laser->output();
    }   
    else{
        laser->output();
        colorlaser->output();
    }
    system("pause");
    return 0;
}