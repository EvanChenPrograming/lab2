#include <iostream>
#include "BMI.h"
#include<fstream>
using namespace std;
int main() {
	float a,b;	
	BMI ctbmi;

	string Filename,status;
	cout<<"Enter the file name you want to calculate"<<endl;
	cin>>Filename;

	ifstream openfile(Filename,ios::in);
	if(!openfile){
		cerr << "Failed opening" << endl; 
		exit(1);
	}
	ofstream outfile("BMI_result",ios::app);
	if(!outfile){
		cerr << "Failed opening" << endl; 
		exit(1);
	}
	while(openfile>>a>>b){
		ctbmi.setHeight(a);
		ctbmi.setWeight(b);
		outfile<<a<<"\t"<<b<<"\t"<<ctbmi.getBMI()<<"\t"<<ctbmi.getStatus()<<endl;
	}

	return 0;
}
