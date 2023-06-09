#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class vector{
	private:
		int n;
		float *v;
	public:
		vector(int size);
		vector(vector &a);
		~vector();
        void input();
        void output();
        int kiem_tra(vector &a);
        friend vector operator +(vector &a,vector &b);
        void operator =(vector &a);
};
vector::vector(int size){
	int i;
	n=size;
	v=new float [n];
}
void vector::input(){
	int i;
	for (i=0;i<n;i++){
		cout<<"v["<<i<<"]: ";
		cin>>v[i];
	}
}
vector::vector(vector &a){
	int i;
	n=a.n;
	v=new float [n];
	for (i=0;i<n;i++)v[i]=a.v[i];
}
vector::~vector(){
	delete v;
}
void vector::output(){
	int i;
	for (i=0;i<n;i++)cout<<v[i]<<"  ";
}
void vector:: operator =(vector &a){
	int i;
	n=a.n;
	v=new float [n];
	for (i=0;i<n;i++)v[i]=a.v[i];
}
vector operator +(vector &a,vector &b){
	int i;
	vector c=a;
	for (i=0;i<a.n;i++)c.v[i]=a.v[i]+b.v[i];
	return c;
}
int vector::kiem_tra(vector &b){
    if (n==b.n) return 1;
    return 0;
}

int main(){
	int n;
	cout<<"Nhap so phan tu cua vector a: ";
    cin>>n;
    vector a(n);
	cout<<"Nhap vector a: \n";
    a.input();
	cout<<"\nNhap so phan tu cua vector b: ";
    cin>>n;
	vector b(n);
	cout<<"Nhap vector b: \n";
    b.input();
    cout<<"vector a: " ;
    a.output();
    cout<<"\nvector b: ";
    b.output();
	if(a.kiem_tra(b)==1){
        cout<<"\nvector tong la: ";
        (a+b).output();
    }
    else cout<<"\nKhong the cong vi khac so luong phan tu!! ";
    getch();
}