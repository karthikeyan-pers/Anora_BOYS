#include<stdio.h>
#include<float.h>
#include<math.h>
#include "functions.h"
float add(float a,float b){
    return a+b;
}

float sub(float a, float b){
    return a-b;
}

float mul(float a, float b) {
    return a * b;
}

float div(float a,float b){
    if(b==0){
        printf("Indivisible");
    return FLT_MAX;}
    return (a/b);
}

float square_root(float a) {
    if (a < 0) return -1.0f; 
    if (a == 0) return 0.0f;

    float xo = a; 
    float error = 1e-5f;

    while (fabs(xo*xo - a) > error) {
        xo = 0.5f * (xo + a / xo);
    }
    return xo;
}
