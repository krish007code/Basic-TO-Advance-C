#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    printf("Enter a : ");
    scanf("%i", &a);
    printf("Enter b : ");
    scanf("%i", &b);
    printf("Enter c : ");
    scanf("%i", &c);
    printf("Enter d : ");
    scanf("%i", &d);
    float distance = sqrt( pow((c - a),2) + pow((d - b),2));
    printf("%f", distance);
    return 0;
}