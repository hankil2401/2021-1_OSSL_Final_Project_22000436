#include <stdio.h>
#include <string.h>
#include "functions.c"

int main() {
	double originalValue = 0.0;
	double resultValue = 0.0;
	char originalMeasurement[10];
	char resultMeasurement[10];

	printf("Please enter original value and measurement\n");
	printf("ex: 10 cm, 36 C, 23 kg, ...: ");
	scanf("%lf %s", &originalValue, originalMeasurement);
	printf("Then please enter to what measurment do you want to change\n");
	printf("ex: m, km, miles, F, K, g, ton, pound, ...): ");
	scanf("%s", resultMeasurement);

	if(strcmp(originalMeasurement, "cm")==0) 
		resultValue = CMto(originalValue, resultMeasurement);
	if(strcmp(originalMeasurement, "m")==0)
		resultValue = Mto(originalValue, resultMeasurement);
	if(strcmp(originalMeasurement, "km")==0)
		resultValue = KMto(originalValue, resultMeasurement);
	if(strcmp(originalMeasurement, "miles")==0)
		resultValue = Milesto(originalValue, resultMeasurement);

	printf("The result is: %lf %s\n", resultValue, resultMeasurement);
}
