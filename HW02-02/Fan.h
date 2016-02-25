#ifndef fan_h
#define fan_h


//Class for Fan
class fan {
private:        //These three variables change for the different fans, so they are private
	int speed;
	bool on;
	double radius;

public:     //These functions are used for both fan1 and fan2 so they are public
	int getSpeed();
	bool getOn();
	double getRadius();

	void setSpeed(int);
	void setOn(bool);
	void setRadius(double);

	//Constuctor for fan
	fan();          //no-arg constructor
	fan(int newSpeed, bool newOn, double newRadius);    //customized constructor

};
#endif /* fan_h */
