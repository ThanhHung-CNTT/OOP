#include <iostream>
#include <conio.h>

using namespace std;

// Khởi tạo Lớp
class Student{
    private:
        string firstAndLastName; // Họ và tên
        float markOfMaths;       // Điểm Toán
        float markOfLiterature;  // Điểm Văn
        float GPA;               // Điểm trung bình
    public:
        Student();
        Student(string firstAndLastName, float markOfMaths, float markOfLiterature);
        Student(string firstAndLastName);
        Student(const Student &student);

        ~Student();
        friend istream &operator>>(istream &input, Student &student);
        friend ostream &operator<<(ostream &ouput, const Student &student);
        Student operator=(const Student &student);
        bool operator>(const Student &student);
        bool operator<(const Student &student);
        bool operator>=(const Student &student);
        bool operator<=(const Student &student);
        bool operator==(const Student &student);
        bool operator!=(const Student &student);
        void input();                     // Nhập
        void output();                    // Xuất
        void setFirstAndLastName(string); 
        void setMarkOfMaths(float);       
        void setMarkOfLiterature(float);  
        string getFirstAndLastName();     
        float getMarkOfMaths();           
        float getMarkOfLiterature();      
        string rating();                  // Xếp loại
};

Student::Student(){
    firstAndLastName = "";
    markOfMaths = 0;
    markOfLiterature = 0;
    GPA = 0;
}

Student::Student(string firstAndLastName, float markOfMaths, float markOfLiterature){
    this->firstAndLastName = firstAndLastName;
    this->markOfMaths = markOfMaths;
    this->markOfLiterature = markOfLiterature;
    this->GPA = (markOfMaths + markOfLiterature) / 2;
}
Student::Student(string firstAndLastName){
    this->firstAndLastName = firstAndLastName;
    markOfMaths = 0;
    markOfLiterature = 0;
    GPA = 0;
}

Student::Student(const Student &student){
    firstAndLastName = student.firstAndLastName;
    markOfMaths = student.markOfMaths;
    markOfLiterature = student.markOfLiterature;
    GPA = student.GPA;
}
Student::~Student() {}

istream &operator>>(istream &input, Student &student){
    cin.ignore();
    cout << "Ho va ten: ";
    getline(input, student.firstAndLastName);
    cout << "Diem toan: ";
    input >> student.markOfMaths;
    cout << "Diem van: ";
    input >> student.markOfLiterature;
    return input;
}

ostream &operator<<(ostream &output, const Student &student){
    output << "Ho va ten: " << student.firstAndLastName << endl;
    output << "Diem toan: " << student.markOfMaths << endl;
    output << "Diem van: " << student.markOfLiterature << endl;
    return output;
}

Student Student::operator=(const Student &student){
    return Student(student);
}

bool Student::operator<(const Student &student){
    return (GPA < student.GPA);
}

bool Student::operator>(const Student &student){
    return (GPA > student.GPA);
}

bool Student::operator<=(const Student &student){
    return (GPA <= student.GPA);
}

bool Student::operator>=(const Student &student){
    return (GPA >= student.GPA);
}

bool Student::operator==(const Student &student){
    return (GPA == student.GPA);
}

bool Student::operator!=(const Student &student){
    return (GPA != student.GPA);
}


void Student::input(){
    cout << "Nhap thong tin sinh vien! " << endl;
    cout << "\tHo va ten: ";
    cin.ignore();
    getline(cin, firstAndLastName);
    cout << "\tDiem Toan: ";
    cin >> markOfMaths;
    cout << "\tDiem Van: ";
    cin >> markOfLiterature;
    GPA = (markOfMaths + markOfLiterature) / 2;
}


void Student::output(){
    string _rating = rating();

    cout << endl;
    cout << "Thong tin sinh vien!" << endl;
    cout << "\tHo va ten: " << firstAndLastName << endl;
    cout << "\tDiem Toan: " << markOfMaths << endl;
    cout << "\tDiem Van: " << markOfLiterature << endl;
    cout << "\tDiem trung binh: " << GPA << endl;
    cout << "\tXep loai: " << _rating << endl;
}

void Student::setFirstAndLastName(string firstAndLastName){
    this->firstAndLastName = firstAndLastName;
}

void Student::setMarkOfMaths(float markOfMaths){
    this->markOfMaths = markOfMaths;
}

void Student::setMarkOfLiterature(float markOfLiterature){
    this->markOfLiterature = markOfLiterature;
}

string Student::getFirstAndLastName(){
    return this->firstAndLastName;
}

float Student::getMarkOfMaths(){
    return this->markOfMaths;
}

float Student::getMarkOfLiterature(){
    return this->markOfLiterature;
}


string Student::rating(){
    if (GPA < 5)
        return "Yeu";
    else if (GPA < 7)
        return "Trung binh";
    else if (GPA < 8)
        return "Kha";
    else
        return "Gioi";
}

int main(){
    Student *student = new Student[100];
    int n;

    cout << "Nhap so luong sinh vien can nhap thong tin: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
        student[i].input();

    cout << "\n\n";
    for (int i = 0; i < n; i++)
        student[i].output();

    if (student[0] > student[1])
        cout << "\nDung roi!" << endl;

    delete[] student;
    cout << "\n\n";
    system("pause");
    return 0;
}