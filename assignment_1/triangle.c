//Write program, which reads a, b, and c as sides of a triangle and prints area. Hint: Area =
// √s(s − a)(s − b)(s − c), where s =
// (a+b+c)
// . sqrt(x) will find square root of x. Input: 5 7
// 2

// 10; output: 16.24.

#include <stdio.h>
#include <math.h>
int main()
{
    int sum = 0;
    int side[3];
    if((side[0] > side[1] + side[2]) || (side[1] > side[0] + side[2]) || (side[2] > side[0] + side[1]))
    {
        printf("invalid sides of triangle\n");
        return 1;
    }
    for(int i =0; i < 3;i++)
    {
        printf("Enter side %i\n", i+1);
        scanf("%i", &side[i]);
        sum += side[i];
    }
    float s = sum / 2.0;
    float area = sqrt(s * ( s - side[0]) * ( s - side[1]) * ( s - side[2]) );
    printf("%f", area);
    return 0;
}