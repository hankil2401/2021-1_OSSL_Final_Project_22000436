#include <stdio.h>
#include <string.h>

double Gramto(float ov, char rm[]) {
    if(strcmp(rm, "kg") == 0)
        return ov/1000;
    if(strcmp(rm, "pound") == 0)
        return (ov/1000)*2.205;
    if(strcmp(rm, "ton") == 0)
        return ov/1000000;
    else
        return 0;
}

double KGto(float ov, char rm[]) {
    if(strcmp(rm, "g") == 0)
        return ov*1000;
    if(strcmp(rm, "pound") == 0)
        return ov*2.205;
    if(strcmp(rm, "ton") == 0)
        return ov/1000;
    else
        return 0;
}

double Poundto(float ov, char rm[]) {
    if(strcmp(rm, "kg") == 0)
        return ov/2.205;
    if(strcmp(rm, "g") == 0)
        return (ov/2.205)*1000;
    if(strcmp(rm, "ton") == 0)
        return (ov/2.205)/1000;
    else
        return 0;
}

double Tonto(float ov, char rm[]) {
    if(strcmp(rm, "kg") == 0)
        return ov*1000;
    if(strcmp(rm, "pound") == 0)
        return ov*2205;
    if(strcmp(rm, "g") == 0)
        return ov*1000000;
    else
        return 0;
}
