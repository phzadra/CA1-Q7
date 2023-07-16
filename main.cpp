#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);
int i=0;

// main() runs in its own thread in the OS
void clock1(){          //1 second clock
    wait_us(1000000);
    i++;
}

int main()
{
    led1=1;                 //Initial Lit state
    led2=2;                 //Initial Lit state
    while (true) {
        clock1();

        if (i%2 == 0){      //LED1 Control 2 seconds 
            led1=!led1;
        printf("%i\n", i);  //Time stamp
        }

        if (i%5 == 0){      //LED2 Control 5 seconds
        led2=!led2;
        printf("%i\n", i);  //Time stamp
        }
    }
}

