#include<iostream>
#include<math.h>
using namespace std;
struct Phan_so{
	float tu;
	float mau;
};
void NhapXuat_Phanso(Phan_so &a){
	cout<<"Nhap tu so: ";
	cin>>a.tu;
	cout<<"Nhap mau so: ";
	cin>>a.mau;
	while(a.mau==0){
		cout<<"Khong ton tai phan so. Nhap lai!!\n";
		cout<<"Nhap tu so: ";
		cin>>a.tu;
		cout<<"Nhap mau so: ";
		cin>>a.mau;
	}
	cout<<"Phan so vua nhap la: " <<a.tu<<"/"<<a.mau;
}
int UCLN(Phan_so &a){
	int c,d;
	c=abs(a.tu);
	d=abs(a.mau);
	while(c!=d)
	{
		if(c>d)
			c=c-d;
		else
			d=d-c;
	}
	return c;
}
void Rut_Gon(Phan_so &a){
	int c=UCLN(a);
	int p,q;
	p=a.tu/c;
	q=a.mau/c;
	cout<<"\nPhan so rut gon la: "<<p<<"/"<<q;
}
void Kiem_Tra(Phan_so &a){
	if(a.tu>0 && a.mau<0)
		cout<<"\nphan so am";
	else if(a.tu<0 && a.mau>0)
		cout<<"\nphan so am";
	else cout<<"\nPhan so duong";
}
void Tinh_Toan_SoSanh(Phan_so &b, Phan_so &c){
	float tong, hieu, thuong; 
	float tich;
	cout<<"\n=====TINH TOAN=====";
	cout<<"\nNhap phan so 1: \n";
	cout<<"Tu so: ";
	cin>>b.tu;
	cout<<"Mau so: ";
	cin>>b.mau;
	while(b.mau==0){
		cout<<"Erro !! Nhap lai phan so 1\n";
		cout<<"Tu so: ";
		cin>>b.tu;
		cout<<"Mau so: ";
		cin>>b.mau;
	}
	cout<<"\nNhap phan so 2: \n";
	cout<<"Tu so: ";
	cin>>c.tu;
	cout<<"Mau so: ";
	cin>>c.mau;
	while(c.mau==0){
		cout<<"Erro !! Nhap lai phan so 2\n";
		cout<<"Tu so: ";
		cin>>c.tu;
		cout<<"Mau so: ";
		cin>>c.mau;
	}
	tong=(b.tu/b.mau)+(c.tu/c.mau);
	hieu=(b.tu/b.mau)+(c.tu/c.mau);
	tich=(b.tu/b.mau)*(c.tu/c.mau);
	thuong=(b.tu/b.mau)/(c.tu/c.mau);
	cout<<"\n";
	printf("Tong 2 phan so= %.2f\n",tong);
	printf("Hieu 2 phan so= %.2f\n",hieu);
	printf("Tich 2 phan so= %.2f\n",tich);
	printf("Thuong 2 phan so= %.2f\n",thuong);
	if(float(b.tu/b.mau)<float(c.tu/c.mau))
		cout<<"\nphan so 1 < phan so 2";
	else if(float(b.tu/b.mau)>float(c.tu/c.mau))
		cout<<"\nphan so 2 < phan so 1";
	else
		cout<<"\n2 phan so bang nhau";
}

int main(){
	struct Phan_so a;
	struct Phan_so b;
	struct Phan_so c;
	NhapXuat_Phanso(a);
	Rut_Gon(a);
	Kiem_Tra(a);
	Tinh_Toan_SoSanh(b,c);
}
