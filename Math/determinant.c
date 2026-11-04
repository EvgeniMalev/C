
double determinant(double a[MAX][MAX], int n)
{
    double det = 0;
    double minor[MAX][MAX];

    if (n == 1)
        return a[0][0];

    if (n == 2)
        return a[0][0] * a[1][1] -
               a[0][1] * a[1][0];

    for (int k = 0; k < n; k++)
    {
        int mi = 0;

        for (int i = 1; i < n; i++)
        {
            int mj = 0;

            for (int j = 0; j < n; j++)
            {
                if (j == k)
                    continue;

                minor[mi][mj] = a[i][j];
                mj++;
            }
            mi++;
        }

        if (k % 2 == 0)
            det += a[0][k] * determinant(minor, n - 1);
        else
            det -= a[0][k] * determinant(minor, n - 1);
    }

    return det;
}

int main()
{
    double a[MAX][MAX];
    int n;

    printf("Enter matrix size: ");
    scanf("%d", &n);

    if (n < 1 || n > MAX)
    {
        printf("Invalid matrix size!\n");
        return 1;
    }

    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    printf("Determinant = %.2lf\n",
           determinant(a, n));

    return 0;
}
