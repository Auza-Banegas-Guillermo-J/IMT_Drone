#include "motor_mixer.h"

double attitude[4]; // thrust, Roll, Pitch, Yaw
double motor_speeds[4]; // motor 1, 2, 3, 4

void calc_motors(void){
    motor_speeds[0] = attitude[0] + attitude[1] + attitude[2] + attitude[3];
    motor_speeds[1] = attitude[0] - attitude[1] + attitude[2] - attitude[3];
    motor_speeds[2] = attitude[0] + attitude[1] - attitude[2] - attitude[3];
    motor_speeds[3] = attitude[0] - attitude[1] - attitude[2] + attitude[3];
}