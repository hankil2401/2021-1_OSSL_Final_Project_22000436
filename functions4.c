#include <stdio.h>
#include <string.h>

double Secto(float ov, char rm[]) {
    if(strcmp(rm, "min") == 0)
        return ov/60;
    if(strcmp(rm, "hour") == 0)
        return ov/60/60;
    else
        return 0;
}

double Minto(float ov, char rm[]) {
    if(strcmp(rm, "sec") == 0)
        return ov*60;
    if(strcmp(rm, "hour") == 0)
        return ov/60;
    else
        return 0;
}

double Hourto(float ov, char rm[]) {
    if(strcmp(rm, "min") == 0)
        return ov*60;
    if(strcmp(rm, "sec") == 0)
        return ov*60*60;
    else
        return 0;
}
