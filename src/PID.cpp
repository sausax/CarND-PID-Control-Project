#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;

	i_error = 0;
	prev_cte = -1;
}

void PID::UpdateError(double cte) {
	if(prev_cte == -1){
		prev_cte = cte;
	}
	i_error += cte;
	p_error = cte;
	d_error = cte-prev_cte;
	prev_cte = cte;
}

double PID::TotalError() {

	return -Kp*p_error - Kd*d_error - Ki*i_error; 
}

