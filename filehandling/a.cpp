#include <iostream>
#include <fstream>
#include <stdlib.h>  //for input output
using namespace std;

int main(){
	
	//opening a file using the open() fucntion
	//ofstream for writing or creating output stream
	//write is the object of ofstrem class
	ofstream write;
	write.open("question.txt");
	write<<"\n Who is the PM of India?";
	write<<"\n Who is the capital of India?";
	write<<"\n Who is the captain of India?";
	write.close();
	
	
	//write.open() creates and open file name Ans.txt
	//
	write.open("Ans.txt");
	write<<"\n Modi Damodar";
	write<<"\n New Delhi";
	write<<"\n Rohit Sharma";
	write.close();
	
	//creating an array of character 
	//ifstream for reading the file or creating input stream
	char a[100];
	char b[100];
	ifstream read;
	read.open("question.txt");
	cout<<"Questions for EST \n";
	while(read){
		read.getline(a,100);
		cout << a <<endl;
	}
	
	
	ifstream read1;
	read1.open("Ans.txt");
	cout << "Answer for the quiz EST";
	while(read1){
		read1.getline(b,100);
		cout<< b << endl;
	}
	

}
