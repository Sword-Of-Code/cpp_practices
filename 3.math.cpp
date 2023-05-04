/*************************************************************************
	> File Name: 3.math.cpp
	> Author: yangchao
	> Mail: 
	> Created Time: Thu 04 May 2023 10:40:00 AM CST
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    float f = 2.3;
    const char *format = "%.1f \t%.1f \t%.1f \t%.1f \t%.1f \t%.1f\n";
    printf("value\tround\tfloor\tceil\ttrunc\tfmod\n");
    f = 2.3;
    printf(format, f, round(f), floor(f), ceil(f), trunc(f), fmod(f, 0.3));
    f = 3.6;
    printf(format, f, round(f), floor(f), ceil(f), trunc(f), fmod(f, 0.3));
    f = 4.5;
    printf(format, f, round(f), floor(f), ceil(f), trunc(f), fmod(f, 0.3));
    f = -1.3;
    printf(format, f, round(f), floor(f), ceil(f), trunc(f), fmod(f, 0.3));
    f = -3.6;
    printf(format, f, round(f), floor(f), ceil(f), trunc(f), fmod(f, 0.3));

    return 0;
}

