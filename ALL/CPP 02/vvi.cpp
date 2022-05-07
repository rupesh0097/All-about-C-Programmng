#include<iostream>
using namespace std;
class student {
   string rno;
public:
   void getnumber() {
       cout << "Enter Roll No:";
       cin>>rno;
   }
   void putnumber() {
       cout << "\n\tRoll No:" << rno << "\n";
   }
};
class test : virtual public student {
public:
   int part1, part2;
   void getmarks() {
       cout << "Enter Marks\n";
      cout << "subject1:";
       cin>>part1;
       cout << "subject2:";
       cin>>part2;
   }
   void putmarks() {
       cout << "\tMarks Obtained\n";
      cout << "\n\subject1:" << part1;
       cout << "\n\subject2:" << part2;
   }
};
class sports : public virtual student {
public:
   int score;
   void getscore() {
       cout << "Enter Sports Score:";
       cin>>score;
   }
   void putscore() {
       cout << "\n\tSports Score is:" << score;
   }
};
class result : public test, public sports {
   int total;
public:
   void display() {
       total = part1 + part2 + score;
       putnumber();
      putmarks();
       putscore();
      cout << "\n\tTotal Score:" << total;
   }
};
int main() {
	 cout<<"-----------------21BCS11021-----------------------\n";
   result obj;
   obj.getnumber();
   obj.getmarks();
   obj.getscore();
   obj.display();
   return 0;
}
