#pragma once
#include <Arduino.h>

class HCSR04
{
public:
	HCSR04(int out, int echo);			//initialisation class HCSR04 (trig pin , echo pin)
	HCSR04(int out, int echo[], int n); //initialisation class HCSR04 (trig pin , echo pin)
	HCSR04(){}; 
	~HCSR04();							//destructor
	float dist() const;					//return curent distance of element 0
	float dist(int n) const;			//return curent distance of element n
	void setup(int out, int echo);

private:
	void init(int out, int echo[], int n); //for constructor
	int out;							   //out pin
	int *echo;							   //echo pin list
	int n;								   //number of el
};