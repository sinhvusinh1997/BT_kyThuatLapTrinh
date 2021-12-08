#include<stdio.h>

#include "b1-b10.h"
#include "b11-b20.h"
#include "b21-b30.h"
#include "b31-b40.h"
#include "b41-b50.h"
#include "b51-b60.h"

void get_num(int &num, char title)
{
    printf("Enter %c: ", title);
    scanf("%d", &num);
}

int check_input(int a, int b)
{
    return a == 0 && b == 0;
}