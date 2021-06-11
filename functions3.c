#include <stdio.h>
#include <string.h>

double Cto(float ov, char rm[]) {
    if(strcmp(rm, "F") == 0)
        return (ov*9/5)+32;
    if(strcmp(rm, "K") == 0)
        return ov + 273.15;
    else
        return 0;
}

double Fto(float ov, char rm[]) {
    if(strcmp(rm, "C") == 0)
        return (ov-32)*5/9;
    if(strcmp(rm, "K") == 0)
        return (ov-32)*5/9 + 273.15;
    else
        return 0;
}

double Kto(float ov, char rm[]) {
    if(strcmp(rm, "C") == 0)
        return ov - 273.15;
    if(strcmp(rm, "F") == 0)
        return ((ov - 273.15)*9/5)+32;
    else
        return 0;
}
