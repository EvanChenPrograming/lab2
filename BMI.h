using namespace std;
class BMI {
public:
	BMI();
	Timer(time_t s);
	void start();
	void setStart(time_t ts);
	time_t getStart();
	int getElapsedTime();
private:
	float height, weight, BMI;
};
