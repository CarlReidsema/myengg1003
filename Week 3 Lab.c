/*#include <stdio.h>
#include <stdlib.h>

int main()
{tuytuytuytu
    int x, y, z;
    printf("Enter a number:");
    scanf("%d", &x);
    printf("Enter a ANOTHER number:");
    scanf("%d", &y);

    z = x*y;
    printf("%d times %d equals %d\n", x, y, z);

    return 0;
    }
*/
   /* #include <stdio.h>
#include <stdlib.h>

int main()
{
    float Miles, z, ConversionFactor = 1.60934;
    printf("Enter your speed in miles (Whole number only, NO UNITS):");
    scanf("%f", &Miles);

    z = (float)Miles*(float)1.60934;
    printf("%d times %f equals your speed in Kilometres %f\n", (int)Miles, ConversionFactor, z);

    return 0;
    }
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Fahrenheit, Celsius, ConversionFactor = (5)/(9)*(Fahrenheit - 32);
    printf("Enter your Temperature in Fahrenheit:");
    scanf("%f", &Fahrenheit);

    Celsius = (float)(5)/(9)*(Fahrenheit - 32);
    printf("%f Degrees Fahrenheit converts to %f Degrees Celsius", (float)Fahrenheit, Celsius);

    return 0;
    }
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Mean, Var, x1, x2, x3, x4;
    printf("Enter a 4 Variables with spaces between each:");
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);

    Mean = (float)(0.25)*(x1+x2+x3+x4);
    Var = (float)((0.1)/(0.3))*(((x1-Mean)*(x1-Mean))+((x2-Mean)*(x2-Mean))+((x3-Mean)*(x3-Mean))+((x4-Mean)*(x4-Mean)));
    printf("Your 4 %f entries return a variance of %f", Mean, Var);

    return 0;
    }
    */
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float answer, x1, y1;
    printf("Enter point 1:");
    scanf("%f %f", &x1, &y1);

    float x2, y2;
    printf("Enter point 2:");
    scanf("%f %f", &x2, &y2);

    float x=0;
    printf("Enter x coordinate:");
    scanf("%f", &x);

    answer = ((y2-y1)/(x2-x1)*(x-x1))+y1;

    printf("Your estimate of y at x is: %f", answer);

}    */


/*   2,4,6,8,10,12,14,16,18,20 Sequence
#include <stdio.h>

int main() {

int x1 = 0;
int x2 = 2;
int d=0;
int xn=0;
int xnm1=0;
int count=0;

d = x2-x1;
while(count<10)  {



xn=xnm1 + 2;
xnm1=xn;
printf("%d\n", xn);
count++;}
return 0;
}
*/


/*   Sum of the series before ^^^^
#include <stdio.h>

int main() {

int x1 = 0;
int x2 = 2;
int d=0;
int xn=0;
int xnm1=0;
int count=0;
int sum=0;
d = x2-x1;
while(count<10)  {



xn=xnm1 + 2;
xnm1=xn;
sum= sum+ xn;
printf("%d %d %d\n", count, xn, sum);
count++;}



return 0;
}
*/






#include <stdio.h>
#include <math.h>

int main()
{
    int xn, x0=2, x1=4, k=0;
   {

   } while(xn<10){


    k=x0*x1;
    k++;

printf("%d\n", xn);

    }

