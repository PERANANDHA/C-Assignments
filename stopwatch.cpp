#include <iostream>
using namespace std;
class Timer{
private:
    bool isRunning;
    int startTime; 
    int stopTime;   
    int duration;

public:
    Timer(){
        isRunning=false;
        startTime=0;
        stopTime=0;
        duration=0;
    }
    void start(){
        if (!isRunning){
            cout<<"Timer started (Enter a start time in seconds): ";
            cin>>startTime;
            isRunning=true;
        } 
        else{
            cout<<"Timer is already running"<<endl;
        }
    }
    void stop(){
        if(isRunning){
            cout<<"Timer stopped (Enter a stop time in seconds): ";
            cin>>stopTime;
            if(stopTime>startTime){
                duration=stopTime-startTime;
            } 
            else{
                cout<<"Invalid stop time It should be greater than start time"<<endl;
                return;
            }
            isRunning=false;
        }
        else{
            cout<<"Timer is not running!"<<endl;
        }
    }
    void getDuration(){
        if(!isRunning&&duration>0){
            cout<<"Duration: "<<duration<<" seconds"<<endl;
        } 
        else if(isRunning){
            cout<<"Timer is still running stop it to get the duration"<<endl;
        } 
        else{
            cout<<"No duration recorded"<<endl;
        }
    }
};
int main(){
    Timer t;
    t.start();
    cin.get();
    t.stop();
    t.getDuration();
    return 0;
}
