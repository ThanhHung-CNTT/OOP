#include <iostream>
#include <string>
using namespace std;

void input(string str[], int &n){
    cout<<"Nhap so luong xau ki tu: ";
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        cout<<"Nhap xau thu "<<i+1<<": "<<endl;
        getline(cin, str[i]);
    }
}
string TimMax(string str[], int n){
    string max = str[0];
    //Tim kiem tuyen tinh
    for(int i=0; i<n; i++)
        if(str[i] > max)
           max = str[i];
    return max;
}
void output(string str[], int n){
    string max = TimMax(str, n);
    cout<<"Gia tri lon nhat: "<<max<<endl;
}
int main(){
    int n;
    string str[n];
    input(str, n);
    output(str, n);
    system("pause");
    return 0;
}