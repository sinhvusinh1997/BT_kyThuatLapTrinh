#include <stdio.h>

// Bài 41: Tính S(n) = 1 / (1 + 1 / ( 1 + 1 / (…. 1 + 1 / 1 + 1))) có n dấu phân số
void bai_41(int n)
{
    int i;
    float sum = 0;

    for (i = 1; i <= n; i++)
        sum = 1 / (1 + sum);

    printf("\nSum=%.4f", sum);
}

// Bài 42: Cho n là số nguyên dương. Hãy tìm giá trị nguyên dương k lớn nhất sao cho S(k)  < n. Trong đó chuỗi k được định nghĩa như sau: S(k) = 1 + 2 + 3 + … + k
int bai_42(int n)
{
    int i = 1, sum = 0;

    /**
        for (i = 0; i < n; i++)
        {
            sum += i;
            if (sum >= n)
            {
                i--;
                break;
            }
        }
    */
    while (sum < n)
    {
        sum += i;
        if (sum >= n)
        {
            i--;
            break;
        }
        i++;
    }

    return i;
}

// Bài 43: Hãy đếm số lượng chữ số của số nguyên dương n
int countNum(int n)
{
    int count = 1;
    while (n /= 10)
    {
        count++;
    }
    return count;
}

// Bài 44: Hãy tính tổng các chữ số của số nguyên dương n
void bai_44(int n)
{
    int sum = 0;
    do
    {
        sum += n % 10;
    } while (n /= 10);
    printf("\nSum=%d", sum);
}

// Bài 45: Hãy tính tích các chữ số của số nguyên dương n
void bai_45(int n)
{
    int T = 1;
    do
    {
        T *= n % 10;
    } while (n /= 10);
    printf("\nT=%d", T);
}

// Bài 46: Hãy đếm số lượng chữ số lẻ của số nguyên dương n
void bai_46(int n)
{
    int count = 0;
    do
    {
        if ((n % 10) % 2 != 0)
            count++;
    } while (n /= 10);
    printf("\nCount: %d", count);
}

// Bài 47: Hãy tính tổng các chữ số chẵn của số nguyên dương n
void bai_47(int n)
{
    int sum = 0;
    do
    {
        if ((n % 10) % 2 == 0)
            sum += n % 10;
    } while (n /= 10);
    printf("\nSum=%d", sum);
}

// Bài 48: Hãy tính tích các chữ số lẻ của số nguyên dương n
void bai_48(int n)
{
    int T = 1;
    do
    {
        if ((n % 10) % 2 != 0)
            T*=n%10;
    } while (n /= 10);
    printf("\nT: %d", T);
}

// Bài 49: Cho số nguyên dương n. Hãy tìm chữ số đầu tiên của n
int firstNum(int n)
{
    int firstNum=n%10;
    while(n/=10){
        firstNum=n%10;
    };
    return firstNum;
}

// Bài 50: Hãy tìm số đảo ngược của số nguyên dương n
int reverseNum(int n)
{
    int sum = 0, count = countNum(n) - 1, temp = n;
    do
    {
        sum += (temp%10)*pow(10, count);
        count--;
    }while(temp/=10);

    return sum;
}