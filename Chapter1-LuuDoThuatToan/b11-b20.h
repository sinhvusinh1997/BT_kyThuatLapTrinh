#include<stdio.h>
#include<math.h>

// Bài 11: Tính S(n) = 1 + 1.2 + 1.2.3 + … + 1.2.3….N
void bai_11(int n)
{
    int sum, i;
    for (i = 1; i <= n; i++)
        sum *= i;
    printf("/nS=%.3f", sum);
}

// Bài 12: Tính S(n) = x + x^2 + x^3 + … + x^n
void bai_12(int x, int n)
{
    int sum = x;
    for (int i = 2; i <= n; i++)
        sum += pow(x, i);
    printf("\nSum=%d", sum);
}

// Bài 13: Tính S(n) = x^2 + x^4 + … + x^2n
void bai_13(int x, int n)
{
    int sum = pow(x, 2);
    for (int i = 4; i <= n; i += 2)
        sum += pow(x, i);
    printf("\nSum=%d", sum);
}

// Bài 14: Tính S(n) = x + x^3 + x^5 + … + x^(2n + 1)
void bai_14(int x, int n)
{
    int sum = x;
    for (int i = 3; i <= n; i += 2)
        sum += pow(x, i);
    printf("\nSum=%d", sum);
}

// Bài 15: Tính S(n) = 1 + 1/(1 + 2) + 1/(1 + 2 + 3) + ….. + 1/(1 + 2 + 3 + …. + N)
float bai_15(int x)
{
    float sum = 1;
    int N = 1;

    for (int i = 2; i <= x; i++)
    {
        N += i;
        sum += 1.0 / N;
    }

    return sum;
}

// Bài 16: Tính S(n) = x + x^2/(1 + 2) + x^3/(1 + 2 + 3) + … + x^n/(1 + 2 + 3 + …. + N)
float bai_16(int x, int n)
{
    float sum = x;
    int N = 1;
    for (int i = 2; i <= n; i++)
    {
        N += i;
        sum += pow(x, i) / N;
    }
    return sum;
}

// Bài 17: Tính S(n) = x + x^2/2! + x^3/3! + … + x^n/N!
float bai_17(int x, int n)
{
    float sum = x;
    int N = 1;
    for (int i = 2; i <= n; i++)
    {
        N *= i;
        sum += pow(x, i) / N;
    }
    return sum;
}

/*Bài 18: Tính S(n) = 1 + x^2/2! + x^4/4! + … + x^2n/(2n)!
    2! = 1.2
    4! = 1.2.3.4 = 2!.(2n-1).2n
*/
float bai_18(int x, int n)
{
    float sum = 1;
    int N = 1;
    for (int i = 1; i <= n; i++)
    {
        N += (2 * i - 1) * 2 * i;
        sum += pow(x, i * 2) / N;
    }
    return sum;
}

// Bài 19: Tính S(n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!
float bai_19(int x, int n)
{
    float sum = 1 + x;
    int N = 1;
    for (int i = 1; i <= n; i++)
    {
        N *= 2 * i * (2 * i + 1);
        sum += pow(x, 2 * i + 1) / N;
    }
    return sum;
}

/* Bài 20: Liệt kê tất cả các “ước số” của số nguyên dương n
    n%i==0
*/
void bai_20(int n)
{
    if (n == 0)
    {
        printf("\n0 NOT a common divisor of any number! Try other number!");
    }
    else
    {
        printf("\nCommon divisor of %d:", n);
        for (int i = 1; i <= abs(n); i++)
        {
            if (n % i != 0)
                continue;
            printf("\n%d", i);
        }
    }
}