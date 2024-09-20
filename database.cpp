#include <iostream>
#include <string>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    int marks[5]; 
    int aggregateMarks;  
    char grade;
    void calculateAggregateAndGrade() {
        int totalMarks = 0;
        for(int i=0;i<5;i++) {
            totalMarks+=marks[i];
        }
        aggregateMarks=totalMarks/5;
        if(aggregateMarks>=90) 
        grade='A';
        else if(aggregateMarks>=80) 
        grade='B';
        else if(aggregateMarks>=70) 
        grade='C';
        else if(aggregateMarks>=60) 
        grade='D';
        else 
        grade='F';
    }
public:
    Student() {
        
    }
    void inputStudentData() {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollNumber;
        cout<<"Enter marks for 5 subjects: ";
        for(int i=0;i<5;i++) {
            cin>>marks[i];
        }
        calculateAggregateAndGrade();
    }
    void displayStudent()const{
        cout<<"Name: "<<name<<"\nRoll Number: "<<rollNumber;
        cout<<"\nAggregate Marks: "<<aggregateMarks<<"\nGrade: "<<grade<<endl;
    }
    int getRollNumber()const{
        return rollNumber;
    }
    int getAggregateMarks()const{
        return aggregateMarks;
    }
    void updateMarks(int newMarks[5]){
        for(int i=0;i<5;i++){
            marks[i]=newMarks[i];
        }
        calculateAggregateAndGrade();
    }
};
void addStudent(Student students[],int &numStudents){
    students[numStudents].inputStudentData();
    numStudents++;
}
void displayAllStudents(Student students[],int numStudents){
    for(int i=0;i<numStudents;i++){
        cout<<"\nStudent "<<i+1<<" Details:\n";
        students[i].displayStudent();
    }
}
void searchStudent(Student students[],int numStudents,int rollNum){
    bool found=false;
    for(int i=0;i<numStudents;i++){
        if(students[i].getRollNumber()==rollNum){
            cout<<"Student found:\n";
            students[i].displayStudent();
            found=true;
            break;
        }
    }
    if(!found){
        cout<<"Student with roll number: "<<rollNum<<" not found\n";
    }
}
void displayStatistics(Student students[],int numStudents){
    if(numStudents==0) {
        cout<<"No students to display statistics.\n";
        return;
    }
    int totalAggregate =0;
    int highest=students[0].getAggregateMarks();
    int lowest=students[0].getAggregateMarks();
    for (int i=0;i<numStudents;i++) {
        int aggregate=students[i].getAggregateMarks();
        totalAggregate+=aggregate;
        if(aggregate>highest) highest=aggregate;
        if(aggregate<lowest) lowest=aggregate;
    }
    int average=totalAggregate/numStudents;
    cout<<"Class Statistics:\n";
    cout<<"Average Marks: " << average<<"\n";
    cout<<"Highest Marks: "<<highest<<"\n";
    cout<<"Lowest Marks: "<<lowest<<"\n";
}
int main() {
    Student students[100];  
    int numStudents = 0;
    int choice;
    while(true) {
        cout<<"\n1. Add Student\n2. View All Students\n3. Search Student by Roll Number\n4. View Class Statistics\n5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
                addStudent(students,numStudents);
                break;
            case 2:
                displayAllStudents(students,numStudents);
                break;
            case 3:
                int rollNum;
                cout << "Enter roll number to search: ";
                cin >> rollNum;
                searchStudent(students,numStudents,rollNum);
                break;
            case 4:
                displayStatistics(students,numStudents);
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid choice\n";
        }
    }
    return 0;
}
