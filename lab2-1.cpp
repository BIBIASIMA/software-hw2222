#include "Lab2-02.h"
#define DUTY_CYCLE 20
#define REAR_LED 9
boolean stop = false;


void myAnalogWrite(int pin,int percent,int time)
{
	for(int i = 0; i < (time/DUTY_CYCLE);i++){
	digitalWrite(9,HIGH);
	double on_time = (double)DUTY_CYCLE * percent/100;
	delay(on_time);
	digitalWrite(9, LOW);
	double off_time = (double)DUTY_CYCLE - on_time;
	delay(off_time);
	}

}

//The setup function is called once at startup of the sketch

void setup()
{

	pinMode(REAR_LED,OUTPUT);
	// Add your initialization code here
}


// The loop function is called in an endless loop

void loop(){

if(stop==false){


	for(int i = 100; i >= 0; i--){

		myAnalogWrite(REAR_LED, i, 10000/100);


	}
	stop =true;

	}

}



