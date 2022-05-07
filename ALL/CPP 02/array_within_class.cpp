//array with in a class
//class is a combination of both primitive and derived datatypes
//let's demonstrate:

#include <iostream>
using namespace std;

//creating a class
class student{
    int id, marks[6];           //array within a class
    char name[25];

public:
    void setdata();
    void result();
};

//defining functions outside the class
//note function defination needs :: to acces the function in that class
void student ::  setdata(){
        cout << "Enter the name and ID: ";
        cin >> name >> id;
        cout << "Enter the marks of six subjects: ";
        for(int i=0; i<6; i++) {cin >> marks[i];}
    }

void student ::  result(){
        int total=0;
        for(int i=0; i<6; i++){total = total + marks[i];}
        cout << "Total mark is : " << total << endl;
        float average;
        average = total/6.0;
        cout << "The average mark is : " << average << endl;

        //lets check pass and fail 
        //if the mark of anyof the subject is less than 40 than he/she is fail
        cout << "Resut : ";
        for(int i=0; i<6; i++){
            if (marks[i]< 40) cout << "Fail ";
            
            else
            cout << "Pass ";

            
        }
}

int  main(){
    student ram;
    ram.setdata();
    ram.result();

    
   
}