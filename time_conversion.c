#include <stdio.h>

int main()
{
    // variable declaration
    int duration, hour, minute, sec;
    // take input
    scanf("%d", &duration);
    // calculate duration into hour, minute and sec
    hour = duration / 3600;
    sec = duration % 3600;
    minute = sec / 60;
    sec %= 60;
    // print the result
    printf("%d:%d:%d\n", hour, minute, sec);
    return 0;
}
