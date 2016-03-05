#ifndef fan_h
#define fan_h

												//Derek - want to save and write this as a header File, remember that for next time
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
