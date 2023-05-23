#include <iostream>
using namespace std;

class ArrayList{
public:
    static const int MAX_SIZE = 100;
    ArrayList();
    bool isEmpty() const;
    int length() const;
    void insert(const int x, int i);
    void append(const int x);
    void remove(int i);
    int retrieve(int i) const;
    void print() const;
    int getLast() const;

private:
    int element[MAX_SIZE];
    int last;
};

ArrayList::ArrayList(){
	last = -1;
}
bool ArrayList::isEmpty() const{
	return (last == -1);
}
int ArrayList::length() const{
    return last + 1;
}	
void ArrayList::append(const int x){
    if(last + 1 == MAX_SIZE){
        cout << "The list is full" << endl;
        exit(0);
    }
    element[last+1] = x;
    last++;             
}
void ArrayList::insert(const int x, int i){
    cout << "Insert position: ";
    cin >> i;
    if(last+1 == MAX_SIZE){
        cout << "The list is full" << endl;
        exit(0);
    }
    for(int j=last+1; j>i; j--){
        element[j] = element[j-1];
    }
    element[i] = x;
    last++;
}
void ArrayList::remove(int i){
    cout << "Remove positon: ";
    cin >>i;
    for(int j=i; j<=last; j++){
        element[j] = element[j+1];
    }
    last--;
}
int ArrayList::retrieve(int i) const{
    cout << "Take a value at: ";
    cin >> i;
    int t;
    for(int j=0; j<=last; j++)
        if(j==i)
          t = element[j];
    return t;
}
int ArrayList::getLast() const{
    return element[last];
}
void ArrayList::print() const{
    for(int i=0; i<=last; i++){
        cout << element[i] << " ";
    }
}

int main() {
	ArrayList list;
    int i;
	if (list.isEmpty())
		cout << "Empty list" << endl;
    else
        cout << "Not empty list" << endl;

    list.append(2);
    list.print();
    cout << endl;
    list.append(8);
    list.print();
    cout << endl;
    list.append(7);
    list.print();
    cout << endl;

    cout << "Length of list: " << list.length() << endl;

    list.insert(5, i);
    list.print();
    cout << endl;

    list.remove(i);
    list.print();
    cout << endl;

    cout << list.retrieve(i) << endl;

    cout << list.getLast() << endl;

	return 0;
}