#include<cstring>
using namespace std;
class BMI {
public:
	BMI();
	void setHeight(float);
	void setWeight(float);
	float getBMI();
	string getStatus();
private:
	float height, weight, bmi;
};
