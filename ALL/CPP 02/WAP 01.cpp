#include <iostream>
using namespace std;

class time{
private: 
    int hrs;
    int min;
    int sec;

public: 
    void getime();
    void printtime();
    void addtime(time t1, time t2);
};

void time :: getime(){
    cout << "Enter the time: " << endl;
    cout << "Hour"; cin >> hrs;
    cout << "Minute"; cin >> min;
    cout << "Second"; cin >> sec;
}

void time :: printtime(){
    cout << "Time after adding both the  time is : "<< endl;
    cout << hrs << ":" << min << ":"<< sec<< endl;
}

void time :: addtime(time t1, time t2)
{
    this->sec = t1.sec +t2.sec;
    this->min = t1.min + t2.min + this->sec/60;;
    this->hrs = t1.hrs + t2.hrs + (this->min/60);
    this->sec = sec%60;
    this->min = min%60;
}
int main()
    {
        time t1;



  
    }