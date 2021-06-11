#include <stdio.h>
#include <string.h>

double msto(float ov, char rm[]) {
    if(strcmp(rm, "km/h") == 0)
        return ov*3.6;
    if(strcmp(rm, "mi/sec") == 0)
        return ov/1609;
    if(strcmp(rm, "mph") == 0)
        return ov*2.237;
    else
        return 0;
}

double kmhto(float ov, char rm[]) {
    if(strcmp(rm, "m/s") == 0)
        return ov/3.6;
    if(strcmp(rm, "mi/sec") == 0)
        return ov/5794;
    if(strcmp(rm, "mph") == 0)
        return ov*1.609;
    else
        return 0;
}

double misecto(float ov, char rm[]) {
    if(strcmp(rm, "m/s") == 0)
        return ov*1609;
    if(strcmp(rm, "km/h") == 0)
        return ov*5794;
    if(strcmp(rm, "mph") == 0)
        return ov*3600;
    else
        return 0;
}

double mphto(float ov, char rm[]) {
    if(strcmp(rm, "m/s") == 0)
        return ov/2.237;
    if(strcmp(rm, "km/h") == 0)
        return ov*1.609;
    if(strcmp(rm, "mi/sec") == 0)
        return ov/3600;
    else
        return 0;
}
