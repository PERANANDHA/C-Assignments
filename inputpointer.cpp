#include <iostream>
#include <string>
using namespace std;
class Student{
private:
    int id;
    string name;
    string department;
    int age;
public:
    void setDetails(int studentId,string studentName,string studentDept,int studentAge){
        this->id=studentId;
        this->name=studentName;
        this->department=studentDept;
        this->age=studentAge;
    }
    void showDetails(){
        cout<<"Student ID: "<<this->id<<"\n";
        cout<<"Student Name: "<<this->name<<"\n";
        cout<<"Department: "<<this->department<<"\n";
        cout<<"Age: "<<this->age<<"\n";
        cout<<"------------------------"<<endl;
    }
};
int main(){
    Student student;
    int id,age;
    string name,dept;
    cout<<"Enter Student ID: ";
    cin>>id;
    cout<<"Enter Student Name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter Department: ";
    getline(cin,dept);
    cout<<"Enter Age: ";
    cin>>age;
    student.setDetails(id,name,dept,age);
    cout<<"\nStudent Information:\n";
    student.showDetails();
    return 0;
}
