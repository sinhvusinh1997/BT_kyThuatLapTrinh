#include<stdio.h>
#include<math.h>
// Bài 1: Tính S(n) = 1 + 2 + 3 + … + n
void bai_1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("\nS=%d", sum);
}

// Bài 2: Tính S(n) = 1^2 + 2^2 + … + n^2
void bai_2(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += pow(i, 2);
    printf("\nS=%d", sum);
}

// Bài 3: Tính S(n) = 1 + 1/2 + 1/3 + … + 1/n
void bai_3(int n)
{
    float sum;
    for (int i = 1; i <= n; i++)
        sum += 1.0 / i;
    printf("\nS=%.3f", sum);
}

// Bài 4: Tính S(n) = 1/2 + 1/4 + … + 1/2n
void bai_4(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
        sum += 1.0 / (2 * i);
    printf("\nS=%.3f", sum);
}

// Bài 5: Tính S(n) = 1 + 1/3 + 1/5 + … + 1/(2n + 1)
void bai_5(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
        sum += 1.0 / (2 * i + 1);
    printf("\nS=%.3f", sum);
}

// Bài 6: Tính S(n) = 1/1*2 + 1/2*3 + … + 1/n*(n + 1)
void bai_6(int n)
{
    float sum = 0;
    int T;
    for (int i = 1; i <= n; i++)
    {
        T = i * (i + 1);
        sum += 1.0 / T;
    }
    printf("\nS=%.3f", sum);
}

// Bài 7: Tính S(n) = 1/2 + 2/3 + 3/4 + …. + n/(n + 1)
void bai_7(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i / (i + 1.0);
    printf("\nS=%.3f", sum);
}

// Bài 8: Tính S(n) = 1/2 + 3/4 + 5/6 + … + 2n + 1/(2n + 2)
void bai_8(int n)
{
    float sum, a;
    for (int i = 0; i <= n; i++)
    {
        a = 2 * i + 1;
        sum += a / (a + 1);
    }
    printf("\nS=%.3f", sum);
}

// Bài 9: Tính T(n) = 1 x 2 x 3…x N
void bai_9(int n)
{
    int T = 1;
    for (int i = 2; i <= n; i++)
        T *= i;
    printf("\nT=%d", T);
}

// Bài 10: Tính T(x, n) = x^n
void bai_10(int x, int n)
{
    int T = 1;
    for (int i = 1; i <= n; i++)
        T *= x;
    printf("\nS=%.3f", T);
}