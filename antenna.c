/* takes command line input of a frequency eg ./antenna 433 to then calculate the approximate best antenna length
  to intercept a given frequency, written as part of my University of Bristol MSc dissertation.
  As I'll be using this just myself, I haven't coded in all the safeguards for incorrect input

  The best length for an antenna is between 1/4 or 1/2 of the wavelength.

  The wavelength is calculated as Speed of Light (300 million meters per second)
  divided by the targetted frequency in Mhz. This factors down to 300/freq.

  This gives a size in meters, which we convert to cm for ease.
  */



#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

#define speedOfLight 300
#define metersToCm 100

int main (int argc, char **argv) {

  float freq;
  float antennaHalf;
  float antennaQuarter;
  float wavelength;

  if(argc < 2){
    printf("\ntoo few arguments\n");
    exit (1);
  }
  if(argc>=3){
    printf("\ntoo many arguments\n");
    exit (2);
  }

  freq = atof(argv[1]);

  if(freq<=0){
    printf("\ninvalid frequency\n");
    exit (3);
  }




  wavelength = (speedOfLight/freq);
  antennaHalf = (wavelength*0.5) * metersToCm;
  antennaQuarter = (wavelength*0.25) * metersToCm;

  printf("\n 1/4 wave antenna = %.2f cm \n 1/2 wave antenna = %.2f cm\n", antennaQuarter, antennaHalf);


return 0;
}
