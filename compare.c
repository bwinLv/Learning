#include <stdio.h>
#include <string.h>
#include <conio.h>

void compare(void)
{
    int x, y, z, t;
    scanf("%d %d %d", &x, &y, &z);
    if (x > y) {
        t = x; x = y; y = t;
    }
    if (x > z) {
        t = z; z = x; x = t;
    }
    if (y > z) {
        t = y; y = z; z = t;
    }
    printf("small to big: %d %d %d\n", x, y, z);
}