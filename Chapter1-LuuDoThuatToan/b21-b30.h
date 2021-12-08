#include<stdio.h>

// Bài 21: Tính tổng tất cả các “ ước số” của số nguyên dương n
void bai_21(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            sum += i;
    printf("\nSum=%d", sum);
}

// Bài 22:Tính tích tất cả các “ước số” của số nguyên dương n
void bai_22(int n)
{
    int T = 1;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            T += i;
    printf("\nT=%d", T);
}

// Bài 23: Đếm số lượng “ước số” của số nguyên dương n
void bai_23(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    printf("\nNumber of common divisor: %d", count);
}

// Bài 24: Liệt kê tất cả các “ước số lẻ” của số nguyên dương n
void bai_24(int n)
{
    printf("\nThe Odd common divisor of %d:", n);
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 != 0)
            printf("\n%d", i);
}

// Bài 25: Tính tổng tất cả các “ước số chẵn” của số nguyên dương n
void bai_25(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 == 0)
            sum += i;
    printf("\nSum of even common divisor of %d: %d", n, sum);
}

// Bài 26: Tính tích tất cả các “ước số lẻ” của số nguyên dương n
void bai_26(int n)
{
    int T = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 != 0)
            T *= i;
    printf("\nSum of even common divisor of %d: %d", n, T);
}

// Bài 27: Đếm số lượng “ước số chẵn” của số nguyên dương n
void bai_27(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 == 0)
            count++;
    printf("\nNumber of even common divisor %d: %d", n, count);
}

// Bài 28: Cho số nguyên dương n. Tính tổng các ước số nhỏ hơn chính nó
void bai_28(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    printf("\nSum=%d", sum);
}

// Bài 29: Tìm ước số lẻ lớn nhất của số nguyên dương n. Ví dụ n = 100 ước lẻ lớn nhất là 25
void bai_29(int n)
{
    int max = 1;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 != 0)
        {
            printf("\n%d", i);
            if (max < i)
                max = i;
        }

    printf("\nThe odd common divisor of %d: %d", n, max);
}

// Bài 30: Cho số nguyên dương n. Kiểm tra xem n có phải là số hoàn thiện hay không
int bai_30(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    
    // sum == n ? printf("\n%d is a perfect number!", n) : printf("\n%d is NOT a perfect number!", n);

    return (sum == n) ? 1 : 0;
}