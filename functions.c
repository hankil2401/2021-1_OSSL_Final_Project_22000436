#include <stdio.h>
#include <string.h>

double CMto(float ov, char rm[]) {
	if(strcmp(rm, "m") == 0)
		return ov/100;
	if(strcmp(rm, "km") == 0)
		return ov/100000;
	if(strcmp(rm, "miles") == 0)
		return (ov/100000)/1.609;
	else 
		return 0;
}
double Mto(float ov, char rm[]) {
        if(strcmp(rm, "cm") == 0)
            return ov*100;
        if(strcmp(rm, "km") == 0)
            return ov/1000;
        if(strcmp(rm, "miles") == 0)
            return (ov/1000)/1.609;
        else
            return 0;
}

double KMto(float ov, char rm[]) {
        if(strcmp(rm, "cm") == 0)
            return ov*100000;
        if(strcmp(rm, "m") == 0)
            return ov*1000;
        if(strcmp(rm, "miles") == 0)
            return ov/1.609;
        else
            return 0;
}

double  Milesto(float ov, char rm[]) {
        if(strcmp(rm, "km") == 0)
            return ov*1.609;
        if(strcmp(rm, "m") == 0)
            return ov*1609;
        if(strcmp(rm, "cm") == 0)
            return ov*160900;
        else
            return 0;
}
