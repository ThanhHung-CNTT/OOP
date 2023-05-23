// Bài toán: Nhập danh sách liên kết đơn các số nguyên. Tìm gia trị lớn nhất trong danh sách
#include<iostream>
using namespace std;
// =============KHAI BÁO CẤU TRÚC DSLK ĐƠN CÁC SỐ NGUYÊN=============

// Khai báo 1 node:

struct node{
    int data;              //Dữ liệu trong 1 node
    struct node *pNext;    //Con trỏ liên kết các node với nhau
};
typedef struct node NODE;  //Thay thế cấu trúc "struct node" bằng "NODE"

//Khai báo cấu trúc của danh sách liên kết đơn:

struct list{
    NODE *pHead;           // Node quản lý đầu danh sách
    NODE *ptail;           // Node quản lý cuối danh sách
};
typedef struct list LIST; 

//===============KHỞI TẠO CẤU TRÚC DSLK ĐƠN CÁC SỐ NGUYÊN===============

void KhoiTao(LIST &l){
    //Cho 2 Node trỏ đến NULL - vì dslk đơn chưa có phần tử
    l.pHead = NULL;
    l.ptail = NULL;
}

//Hàm khởi tạo 1 node
NODE *KhoiTaoNODE(){
    
}

int main(){
    NODE x; 
    system("pause");
    return 0;
}