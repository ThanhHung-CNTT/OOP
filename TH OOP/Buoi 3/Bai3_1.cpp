#include<iostream>
using namespace std;
#define Pi 3.14
class Shape{
    public:
        virtual void input()=0;
        virtual void output()=0;
        virtual float dientich(){
            return 0;
        }
};

class Circle : public Shape{
    private:
        float r;
    public:
        Circle();
        void input();
        void output();
        float dientich(); 
};
Circle::Circle(){
    this->r = 0;
}
void Circle::input(){
    cout<<"Nhap ban kinh hinh tron: "<<endl;
    cin>>r;
}
void Circle::output(){
    float radiuss = dientich();
    cout<<"Dien tich hinh tron la: "<<radiuss<<endl;
}
float Circle::dientich(){
    return (r*r)*Pi;
}
class Rectangle : public Shape{
    private:
        float dai;
        float rong;
    public:
        Rectangle();
        void input();
        void output();
        float dientich();
};
Rectangle::Rectangle(){
    this->dai = 0;
    this->rong = 0;
}
void Rectangle::input(){
    cout<<"Nhap chieu dai hinh chu nhat: "<<endl;
    cin>>dai;
    cout<<"Nhap chieu rong hinh chu nhat: "<< endl;
    cin>>rong;
}
void Rectangle::output(){
    float lengths = dientich();
    cout<<"Dien tich hinh chu nhat la: "<<lengths<<endl;
}
float Rectangle::dientich(){
    return dai*rong;
}
int main(){
    Shape *circle = new Circle;
    Shape *rectangle = new Rectangle;
    circle->input();
    circle->output();
    rectangle->input();
    rectangle->output();
    system("pause");
    return 0;
}