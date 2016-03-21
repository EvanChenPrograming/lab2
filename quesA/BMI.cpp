#include<iostream>
#include"BMI.h"
	BMI::BMI(){
		height=0;
		weight=0;
		bmi=0;	
	}
	void BMI:: setHeight(float get){
		height=get;
	}
	void BMI:: setWeight(float get){
		weight=get;
	}
	float BMI::getBMI(){
		if(height<=0)
			bmi=0;
		else
			bmi=(weight/height)/height/1000;
			return bmi;
	}
	string BMI::getStatus(){
		if(bmi<=0)
			return "end";
		else if(bmi<15)
			return "Very severely underweight";
		else if(bmi<16)
			return "Severely underweight";
		else if(bmi<18.5)
			return "Underweight";
		else if(bmi<25)
			return "Normal";
		else if(bmi<30)
			return "Overweight";
		else if(bmi<35)
			return "Obese Class I (Moderately obese)";
		else if(bmi<40)
			return "Obese Class II (Severely obese)";
		else
			return "Obese Class III (Very severely obese)";
	}

