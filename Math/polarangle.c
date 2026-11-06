#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main()
{
    double x, y;
    double r, phi, degrees;

    printf("Enter x: ");
    scanf("%lf", &x);

    printf("Enter y: ");
    scanf("%lf", &y);

  
    r = sqrt(x * x + y * y);

    
    phi = atan2(y, x);

    degrees = phi * 180.0 / PI;

    if (degrees < 0)
        degrees += 360.0;

    printf("\nPolar coordinates:\n");
    printf("r = %.2lf\n", r);
    printf("Angle = %.2lf degrees\n", degrees);

    return 0;
}
