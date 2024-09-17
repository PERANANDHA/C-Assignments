#include <iostream>
#include <string>
using namespace std;
class Employee{
private:
    int id;
    string name;
    string department;
    double salary;
public:
    Employee(){
        id=0;  
        salary=0.0;
    }
    void setDetails(int empId,string empName,string empDept,double empSalary){
        id=empId;
        name=empName;
        department=empDept;
        salary=empSalary;
    }
    void showDetails(){
        if (id!=0){ 
            cout<<"ID: "<<id<<"\n";
            cout<<"Name: "<<name<<"\n";
            cout<<"Department: "<<department<<"\n";
            cout<<"Salary: "<<salary<<" rupees"<<"\n";
            cout << "------------------------" << endl;
        }
    }
    int getId(){
        return id;
    }
    void remove(){
        id=0;
        name="";
        department="";
        salary=0.0;
    }
};
class EmployeeDatabase{
private:
    Employee employees[100]; 
    int totalEmployees;
public:
    EmployeeDatabase(){
        totalEmployees=0;
    }
    void addEmployee(int id,string name,string dept,double salary){
        if (totalEmployees<100){
            employees[totalEmployees].setDetails(id,name,dept,salary);
            totalEmployees++;
            cout <<"Employee added\n";
        } 
        else{
            cout<<"Database is full\n";
        }
    }
    void showAllEmployees(){
        if (totalEmployees==0) {
            cout<<"No employees in the database\n";
        } 
        else{
            for(int i=0;i<totalEmployees;i++){
                if(employees[i].getId()!=0){
                    employees[i].showDetails();
                }
            }
        }
    }
    void findEmployeeById(int id){
        for (int i=0;i<totalEmployees;i++) {
            if(employees[i].getId()==id){
                cout<<"Employee found:\n";
                employees[i].showDetails();
                return;
            }
        }
        cout<<"Employee with ID "<<id<<" not found\n";
    }
    void removeEmployeeById(int id){
        for(int i=0;i<totalEmployees;i++){
            if(employees[i].getId()==id){
                employees[i].remove();
                cout<<"Employee removed\n";
                return;
            }
        }
        cout<<"Employee with ID "<<id<<" not found\n";
    }
};
int main(){
    EmployeeDatabase db;
    int choice,id;
    string name,dept;
    double salary;
    while(true){
        cout<<"1. Add Employee\n2. Show All Employees\n3. Find Employee by ID\n4. Remove Employee by ID\n5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter Employee ID: ";
                cin>>id;
                cout<<"Enter Employee Name: ";
                cin.ignore();  
                getline(cin,name);
                cout<<"Enter Department: ";
                getline(cin,dept);
                cout<<"Enter Salary: ";
                cin>>salary;
                db.addEmployee(id,name,dept,salary);
                break;
            case 2:
                db.showAllEmployees();
                break;
            case 3:
                cout<<"Enter Employee ID to find: ";
                cin>>id;
                db.findEmployeeById(id);
                break;
            case 4:
                cout<<"Enter Employee ID to remove: ";
                cin>>id;
                db.removeEmployeeById(id);
                break;
            case 5:
                cout<<"Exiting program...\n";
                return 0;
            default:
                cout<<"Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
