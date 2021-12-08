// Bài 51: Tìm chữ số lớn nhất của số nguyên dương n
int biggestNum(int n)
{
    int max = n % 10;
    while (n /= 10)
    {
        if ((n % 10) > max)
            max = n % 10;
    }
    return max;
}

// Bài 52: Tìm chữ số nhỏ nhất của số nguyên dương n
int smallestNum(int n)
{
    int min = n % 10;
    while (n /= 10)
    {
        if ((n % 10) < min)
            min = n % 10;
    }
    return min;
}

// Bài 53: Hãy đếm số lượng chữ số lớn nhất của số nguyên dương n
int count_biggestNum(int n)
{
    int max, count;
    max = biggestNum(n);
    count = 0;

    do
    {
        if ((n % 10) == max)
            count++;
    } while (n /= 10);

    return count;
}

// Bài 54: Hãy đếm số lượng chữ số nhỏ nhất của số nguyên dương n
int count_smallestNum(int n)
{
    int min, count;
    min = smallestNum(n);
    count = 0;

    do
    {
        if ((n % 10) == min)
            count++;
    } while (n /= 10);

    return count;
}

// Bài 55: Hãy đếm số lượng chữ số đầu tiên của số nguyên dương n
int count_firstNum(int n)
{
    int first, count;
    first = firstNum(n);
    count = 0;

    do
    {
        if ((n % 10) == first)
            count++;
    } while (n /= 10);

    return count;
}

// Bài 56: Hãy kiểm tra số nguyên dương n có toàn chữ số lẻ hay không
int check_allOddNum(int n)
{
    int flat = 1;
    do
    {
        if ((n % 10) % 2 == 0)
        {
            flat = 0;
            break;
        }
    } while (n /= 10);
    return flat;
}

// Bài 57: Hãy kiểm tra số nguyên dương n có toàn chữ số chẵn hay không
int check_allEvenNum(int n)
{
    int flat = 1;
    do
    {
        if ((n % 10) % 2 != 0)
        {
            flat = 0;
            break;
        }
    } while (n /= 10);
    return flat;
}

// Bài 59: Hãy kiểm tra số nguyên dương n có phải là số đối xứng hay không
int check_reverseNum(int n)
{
    return reverseNum(n) == n;
}

// Bài 60: Hãy kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải hay không
// a < b < c < d
int check_increaseLeftToRight(int n)
{
    int max, flat;
    max = n % 10;
    flat = 1;

    while (n /= 10)
    {
        if ((n % 10) < max)
            max = n % 10;
        else
        {
            flat = 0;
            break;
        }
    }
    return flat;
}