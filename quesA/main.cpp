#include <iostream>
#include "BMI.h"
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main(int argc, const char * argv[]) {
	float a,b;	
	BMI ctbmi;
	ifstream openfile("file.in",ios::in);
	if(!openfile){
		cerr << "Failed opening" << endl; 
		exit(1);
	}
	ofstream outfile("file.out",ios::out);
	if(!outfile){
		cerr << "Failed opening" << endl; 
		exit(1);
	}
	while(openfile>>a>>b){
		ctbmi.setHeight(a);
		ctbmi.setWeight(b);
		if(ctbmi.getBMI()==0)
			break;
		outfile<<fixed<<setprecision(2)<<ctbmi.getBMI()<<"\t"<<ctbmi.getStatus()<<endl;
	}

	return 0;
}
