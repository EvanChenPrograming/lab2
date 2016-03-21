#include<string>
using namespace std;
class BMI {
public:
	BMI();
	void setHeight(int);
	void setWeight(int);
	float getBMI();
	string getStatus();
private:
	int height, weight;
	int	bmi;
};
