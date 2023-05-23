#include<iostream>
using namespace std;
class A{
    public:
        //hàm ảo
        virtual void show(){
            cout<<"Hello A\n";
        }
        //Hàm thuần ảo
        virtual void show1()=0;
};
class B:public A{
    public:
        // void show(){
        //     cout<<"Hello B\n";
        // }
        void show1(){
            cout<<"Hello B\n";
        }
};
class C: public A{
    public:
        void show(){
            cout<<"Hello C\n";
        }
        void show1(){
            cout<<"Hello C\n";
        }
};
int main(){
    A *a=new B;
    //A a2; Không thể khai báo biến thường khi class chứa hàm thuần ảo
    B b1;
    C c1;
    //a->show();
    // a2.show();
    a=&c1;
    a->show();
    // a=&b1;
    // a->show();
    // a=&a2;
    // a->show();
}