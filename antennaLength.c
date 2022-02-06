/* simple program to calculate the approximate best antenna length to
  intercept a given frequency, written as part of my University of Bristol
  MSc dissertation.

  The best length for an antenna is between 1/4 or 1/2 of the wavelength.

  The wavelength is calculated as Speed of Light (300 million meters per second)
  divided by the targetted frequency in Mhz. This factors down to 300/freq.

  This gives a size in meters, which we convert to cm for ease.
  */



#include <stdio.h>

#define speedOfLight 300
#define metersToCm 100

int main (void){

  float freq;
  float antennaHalf;
  float antennaQuarter;
  float wavelength;

  printf("enter frequency in MHz eg 88.8\n");
  scanf("%f", &freq);
  if(freq <=0){
    printf("\ninvalid frequency... exiting");
    return 0;
  }

  wavelength = (speedOfLight/freq);
  antennaHalf = (wavelength*0.5) * metersToCm;
  antennaQuarter = (wavelength*0.25) * metersToCm;

  printf("\n 1/4 wave antenna = %.2f cm \n 1/2 wave antenna = %.2f cm\n", antennaQuarter, antennaHalf);


return 0;
}
