#include <iostream>
#include <conio.h>
using namespace std;

class vector{
    private:
        int n;
        float *v;
    public:
        vector();
        ~vector();
        void nhap();
        void in();
        friend vector operator + (vector a,vector b);
};

vector::vector(){
    n = 0;
    v = new float[n];
    for (int i=1;i<=n;i++)
    v[i] = 0;
}
vector::~vector(){
    delete v;
}

void vector::nhap(){
    cout<<"Enter the number of elements vecto : ";
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<"Enter element "<<i<<" : ";
        cin>>v[i];
    }
}

void vector::in(){
	for (int i=1;i<=n;i++)
	cout<<v[i]<<"  ";
}
vector operator+ (vector a,vector b){
    vector c;
    c.n=a.n+b.n;
    int dem=-1,j=0;
    for(int i=1;i<=a.n+b.n;i++){
        dem++;
        if(dem<a.n)
            c.v[i]=a.v[i];
        else{
            j++;
            c.v[i]=b.v[j];
        }
    }
    return c;
}

int main(){
    vector a,b;
    cout<<"Enter vecto a :\n";
    a.nhap();
    cout<<"\nEnter vecto b:\n";
    b.nhap();
    cout<<"\nOutput vector a: ";
    a.in();
    cout<<"\nOutput vector b: ";
    b.in();
    cout<<endl;
    cout<<"Sum 2 vector: ";
    (a+b).in();
    system("pause");
}