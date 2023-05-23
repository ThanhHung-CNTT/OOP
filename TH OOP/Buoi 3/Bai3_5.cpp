#include <iostream>
#include <string>
using namespace std;
class Media{
    protected:
        string tengoi;
        float giaban;
    public:
        Media();
        virtual void input()=0;
        virtual void output()=0;
};
Media::Media(){
    this->tengoi = "";
    this->giaban = 0;
}
class Book : public Media{
    private:
        int SoTrang;
        string TacGia;
    public: 
        Book();
        void input();
        void output();
};
Book::Book(){
    this->SoTrang = 0;
    this->TacGia = "";
}
void Book::input(){
    cout<<"Nhap ten phuong tien: "<<endl;
    getline(cin, tengoi);
    cout<<"Nhap gia ban phuong tien: "<<endl;
    cin>>giaban;
    cout<<"Nhap so trang: "<<endl;
    cin>>SoTrang;
    cout<<"Nhap tac gia: "<<endl;
    cin.ignore(1);
    getline(cin, TacGia);
}
void Book::output(){
    cout<<"Ten phuong tien: "<<tengoi<<endl;
    cout<<"Gia phuong tien: "<<giaban<<endl;
    cout<<"So trang: "<<SoTrang<<endl;
    cout<<"Tac gia: "<<TacGia<<endl;
}
class Video : public Media{
    private:
        int Time_Chay;
        float Gia;
    public:
        Video();
        void input();
        void output();
};
Video::Video(){
    this->Time_Chay = 0;
    this->Gia = 0;
}
void Video::input(){
    cout<<"Nhap ten phuong tien: "<<endl;
    cin.ignore(0);
    getline(cin, tengoi);
    cout<<"Nhap gia ban phuong tien: "<<endl;
    cin>>giaban;
    cout<<"Nhap thoi gian chay: "<<endl;
    cin>>Time_Chay;
    cout<<"Nhap gia ban video: "<<endl;
    cin>>Gia;
}
void Video::output(){
    cout<<"Ten phuong tien: "<<tengoi<<endl;
    cout<<"Gia phuong tien: "<<giaban<<endl;
    cout<<"Thoi gian chay: "<<Time_Chay<<endl;
    cout<<"Gia video: "<<Gia<<endl;
}
int main(){
    Media *book = new Book;
    Media *video = new Video;
    book->input();
    book->output();
    video->input();
    video->output();
    system("pause");
    return 0;
}