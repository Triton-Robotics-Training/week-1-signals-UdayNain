//STARTER 
//THIS EXERCISE IS TO BE DONE IN THE ARM MBED SIMULATOR
//http://195.130.59.221/
//IF YOU HAVE ISSUES WITH THE SIMULATOR, CONTACT EMBEDDED LEAD
#include "mbed.h"

DigitalOut output(LED1);
AnalogIn pot(p15);
double x;

int main() {
    while (1) {
        printf("Week 1 Exercise 2");
        x=pot.read();
        output=1;
        wait_ms(2000*x); 
        output=0;
        wait_ms((1-x)*2000);
        // MAKE SURE THERE IS ALWAYS A WAIT ON THE SIM OR IT WILL CRASH
    }
}
