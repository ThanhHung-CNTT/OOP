#include<iostream>
using namespace std;
int main(){
	int day;
	while(day!=1){
		cout<<"======MENU======\n";
		cout<<"Chon 1 ngay trong tuan tu 2=>8\n";
		cout<<"1. Thoat chuong trinh =))";
		cin>>day;
		switch(day){
			case 2:
				cout<<"Thu 2\n";
				break;
			case 3:
				cout<<"Thu 3\n";
				break;
			case 4:
				cout<<"Thu 4\n";
				break;
			case 5:
				cout<<"Thu 5\n";
				break;
			case 6:
				cout<<"Thu 6\n";
				break;
			case 7:
				cout<<"Thu 7\n";
				break;
			case 8:
				cout<<"Chu nhat\n";
				break;
			default:
				cout<<"Nhap lai\n";
				break;
		}
	}
}
