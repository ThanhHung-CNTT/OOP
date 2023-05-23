#include<iostream>
using namespace std;
#include<fstream>

int main()
{
	// ====================== DOC FILE ======================
	// CU PHAP: ifstream <Ten bien file>;
	// BUOC 1: KHAI BAO RA BIEN DE DOC FILE
	ifstream FileIn; // khai bao ra 1 bien FileIn de doc du lieu tu file
	// BUOC 2: MO FILE CAN DOC DU LIEU
	// open(<Ten duong dan den file can mo - de doc - day la 1 chuoi>, <che do lam viec voi file>);
	FileIn.open("c:\\users\\admin\\desktop\\INPUT.TXT", ios_base::in);

	if (FileIn.fail() == true)
	{
		cout << "\nFile cua ban khong ton tai";
		system("pause");
		return 0; // ket thuc chuong trinh
	}

	// BUOC 3: XU LI FILE - DOC DU LIEU TU FILE RA CHUONG TRINH
	int x;
	int y;
	//cin >> x;
	FileIn >> x; // doc so nguyen dau tien tu file
	//cin >> y;
	FileIn >> y; // doc so nguyen tiep theo tu file

	// BUOC 4: DONG FILE LAI SAU KHI DA XU LI
	FileIn.close(); // dong file lai sau khi xu li
	//cout << "\nTong cua 2 so nguyen: " << x + y;

	// ====================== GHI FILE ======================
	ofstream FileOut;
	FileOut.open("c:\\users\\admin\\desktop\\OUTPUT.TXT", ios_base::out);
	FileOut << x + y; // lay x + y roi ghi vao file OUTPUT.TXT
	
	FileOut << 20;
	FileOut << 21;
	FileOut.close(); // dong file lai
	system("pause");
	return 0;
}