#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, d;
    double p, q, D;
    double u, v;
    double x1, x2, x3;
    double pi = acos(-1.0);

    printf("Reshavane na polinom ot treta stepen\n");

    printf("Vavedete koeficient a: ");
    scanf("%lf", &a);

    printf("Vavedete koeficient b: ");
    scanf("%lf", &b);

    printf("Vavedete koeficient c: ");
    scanf("%lf", &c);

    printf("Vavedete koeficient d: ");
    scanf("%lf", &d);

    if (a == 0)
    {
        printf("Greshka: a ne moje da bude 0!\n");
        return 1;
    }

    double B = b / a;
    double C = c / a;
    double E = d / a;

    p = C - B * B / 3.0;

    q = 2.0 * B * B * B / 27.0
        - B * C / 3.0 + E;

    D = q * q / 4.0 + p * p * p / 27.0;

    printf("\nRezultati:\n");

    if (D > 0)
    {
        u = cbrt(-q / 2.0 + sqrt(D));
        v = cbrt(-q / 2.0 - sqrt(D));

        x1 = u + v - B / 3.0;

        printf("Edin realen koren:\n");
        printf("x1 = %.6lf\n", x1);
    }
    else if (fabs(D) < 1e-12)
    {
        u = cbrt(-q / 2.0);

        x1 = 2.0 * u - B / 3.0;
        x2 = -u - B / 3.0;

        printf("Tri realni korena (s povtorenie):\n");
        printf("x1 = %.6lf\n", x1);
        printf("x2 = %.6lf\n", x2);
    }
    else
    {
        double r = 2.0 * sqrt(-p / 3.0);

        double theta = acos(
            (3.0 * q / (2.0 * p)) *
            sqrt(-3.0 / p)
        );

        x1 = r * cos(theta / 3.0) - B / 3.0;

        x2 = r * cos((theta + 2.0 * pi) / 3.0)
             - B / 3.0;

        x3 = r * cos((theta + 4.0 * pi) / 3.0)
             - B / 3.0;

        printf("Tri razlichni realni korena:\n");
        printf("x1 = %.6lf\n", x1);
        printf("x2 = %.6lf\n", x2);
        printf("x3 = %.6lf\n", x3);
    }

    return 0;
}
