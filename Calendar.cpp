#include <iostream>
using namespace std;
class Calendar {
public:
    bool isLeapYear(int year) {
        if (year%400==0||(year%100!=0&&year%4==0))
            return true;
        return false;
    }
    int getDaysInMonth(int month, int year) {
        switch(month) {
            case 1: return 31;
            case 2: return isLeapYear(year) ? 29 : 28;
            case 3: return 31;
            case 4: return 30;
            case 5: return 31;
            case 6: return 30;
            case 7: return 31;
            case 8: return 31;
            case 9: return 30;
            case 10: return 31;
            case 11: return 30;
            case 12: return 31;
            default: return 0;
        }
    }
    int getFirstDayOfYear(int year){
        int day=(year*365+year/4-year/100+year/400)%7;
        return day;
    }
    void printMonth(int month,int year) {
        const string months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        cout<< "   " << months[month - 1] << " " << year << endl;
        cout<< " S  M  T  W  T  F  S" << endl;
        int firstDay = getFirstDayOfYear(year);
        for(int i=1;i<month;i++){
            firstDay=(firstDay+getDaysInMonth(i,year))%7;
        }
        for(int i=0;i<firstDay;i++){
            cout<< "   ";
        }
        int daysInMonth=getDaysInMonth(month,year);
        for(int day=1;day<=daysInMonth;day++){
            cout<<(day<10?" ":"")<<day<<" ";
            if((firstDay+day)%7==0){
                cout<<endl;
            }
        }
        cout<<endl;
    }
};
int main(){
    int month,year;
    cout<<"Enter month (1-12): ";
    cin>>month;
    cout<<"Enter year: ";
    cin>>year;
    Calendar calendar;
    calendar.printMonth(month,year);
    return 0;
}
