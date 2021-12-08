#include <stdio.h>
#include <math.h>

// Bài 31: Cho số nguyên dương n. Kiểm tra xem n có phải là số nguyên tố hay không
int isPrimeNumber(int n)
{
    int i, sqrtNum;
    sqrtNum = sqrt(n);

    if (n <= 1)
        return 0;

    for (i = 2; i <= sqrtNum; i++)
        if (n % i == 0)
            return 0;

    return 1;
}

// Bài 32: Cho số nguyên dương n. Kiểm tra xem n có phải là số chính phương hay không
int isSquareNumber(int n)
{
    if (n < 0)
        n = -n;
    int sqrtNum = sqrt(n);
    return sqrt(n) == (int)sqrtNum;
}

// Bài 33: Tính S(n) = CanBac2(2+CanBac2(2+….+CanBac2(2 + CanBac2(2)))) có n dấu căn
void bai_33(int n)
{
    int i;
    float sum = 0;

    for (i = 1; i <= n; i++)
        sum = sqrt(2 + sum);

    printf("\nSum=%.4f", sum);
}

// Bài 34: Tính S(n) = CanBac2(n+CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1)  có n dấu căn
void bai_34(int n)
{
    int i;
    float sum = 0;

    for (i = 1; i <= n; i++)
        sum = sqrt(i + sum);

    printf("\nSum=%.4f", sum);
}

// Bài 35: Tính S(n) = CanBac2(1+CanBac2(2 + CanBac2(3 + … + CanBac2(n-1 + CanBac2(n)))))  có n dấu căn
void bai_35(int n)
{
    int i;
    float sum = 0;

    for (i = n; i >= 1; i--)
        sum = sqrt(i + sum);

    printf("\nSum=%.4f", sum);
}

// Bài 36: Tính S(n) = CanBac2(n! + CanBac2((n-1)! +CanBac2((n – 2)! + … + CanBac2(2!) + CanBac2(1!)))) có n dấu căn
void bai_36(int n)
{
    int i, N;
    float sum = 0;
    N = 1;

    for (i = 1; i <= n; i++)
    {
        N *= i;
        sum = sqrt(N + sum);
    }

    printf("\nSum=%.4f", sum);
}

// Bài 37: Tính S(n) = CanBac N(N + CanBac N – 1(N – 1 + … + CanBac3(3 + CanBac2(2))) có n – 1 dấu căn
void bai_37(int n)
{
    if (n < 2)
        return;

    int i;
    float sum = 0;

    for (i = 2; i <= n; i++)
        sum = pow((i + sum), 1.0 / i);

    printf("\nSum=%.4f", sum);
}

// Bài 38: Tính S(n) = CanBac N + 1(N + CanBac N(N – 1 +…+CanBac3(2 + CanBac2(1)))) có n dấu căn
void bai_38(int n)
{
    int i;
    float sum, a;
    sum=0;

    for (i = 1; i <= n; i++)
    {
        a = 1.0 / (i + 1.0);
        sum = pow((i + sum), a);
    }

    printf("\nSum=%.4f", sum);
}

// Bài 39: Tính S(n) = CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!))) có n dấu căn
void bai_39(int n)
{
    int i, N;
    float a, sum;
    sum=0;
    N = 1;

    for (i = 1; i <= n; i++)
    {
        N *= i;
        a = 1.0 / (i + 1);
        sum = pow((N + sum), a);
    }

    printf("\nSum=%.4f", sum);
}

// Bài 40: Tính S(n) = CanBac2(x^n + CanBac2(x^n-1 + … + CanBac2(x^2 + CanBac2(x)))) có n dấu căn

void bai_40(int x, int n)
{
    int i;
    float sum = 0;

    for (i = 1; i <= n; i++)
        sum = sqrt(pow(x, i) + sum);

    printf("\nSum=%.4f", sum);
}