#ifndef MOTOR_MIXER_H_
#define MOTOR_MIXER_H_

extern double attitude[4]; // thrust, Roll, Pitch, Yaw
extern double motor_speeds[4]; // motor 1, 2, 3, 4 

void calc_motors(void);
   
#endif