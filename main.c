#include <stdio.h>
#include <string.h>
#include "functions.c"
#include "functions2.c"
#include "functions3.c"
#include "functions4.c"
#include "functions5.c"

int main() {
	double originalValue = 0.0;
	double resultValue = 0.0;
	char originalMeasurement[10];
	char resultMeasurement[10];

	printf("Welcome to converter for Length, Speed, Time, Mass and Temperature\n");
	printf("\tUnit for length: cm, m, km, miles\n");
	printf("\tUnit for speed: m/s, km/h, mi/sec, mph\n");
	printf("\tUnit for time: sec, min, hour\n");
	printf("\tUnit for mass: g, kg, ton, pound\n");
	printf("\tUnit for temperature: C, F, K\n\n");

	while(1) {

		printf("Please enter original value and measurement(number measurement): ");
		scanf("%lf %s", &originalValue, originalMeasurement);
		if(originalValue == 0 && strcmp(originalMeasurement, "done")==0)
			return 0;
		printf("Then please enter to what measurment do you want to change: ");
		scanf("%s", resultMeasurement);

		if(strcmp(originalMeasurement, "cm")==0) 
			resultValue = CMto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "m")==0)
			resultValue = Mto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "km")==0)
			resultValue = KMto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "miles")==0)
			resultValue = Milesto(originalValue, resultMeasurement);

		if(strcmp(originalMeasurement, "g")==0)
			resultValue = Gramto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "kg")==0)
   		 	resultValue = KGto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "pound")==0)
    			resultValue = Poundto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "ton")==0)
    			resultValue = Tonto(originalValue, resultMeasurement);

		if(strcmp(originalMeasurement, "C")==0)
    			resultValue = Cto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "F")==0)
    			resultValue = Fto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "K")==0)
    			resultValue = Kto(originalValue, resultMeasurement);

		if(strcmp(originalMeasurement, "sec")==0)
    			resultValue = Secto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "min")==0)
    			resultValue = Minto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "hour")==0)
    			resultValue = Hourto(originalValue, resultMeasurement);

		if(strcmp(originalMeasurement, "m/s")==0)
    			resultValue = msto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "km/h")==0)
    			resultValue = kmhto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "mi/sec")==0)
    			resultValue = misecto(originalValue, resultMeasurement);
		if(strcmp(originalMeasurement, "mph")==0)
    			resultValue = mphto(originalValue, resultMeasurement);

		printf("\tThe result is: %g %s\n", resultValue, resultMeasurement);
		printf("If the result is 0, it means you type in wrong unit from what is mentions at first\n\n");
	}
}
