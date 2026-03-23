#include<stdio.h>
#include<math.h>
float square_root(float a){
float xo=a/2;
float error=1e-5;
while(fabs(a-(xo*xo))>error)
{
    xo=0.5f*(xo+(a/xo));
}
return xo;
}