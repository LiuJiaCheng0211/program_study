#include <stdio.h>
#include <stdlib.h>

int main()
{
    double side1, side2, side3, which_two_are_equal;
    printf("Please enter three lengths of triangle:\n");
    scanf("%lf%lf%lf", &side1, &side2, &side3);
    if (!((side1 + side2) > side3 && side3 > abs(side1 - side2)))
    {
        printf("It is not a triangle.\n");
    }
    else if (side1 == side2 && side2 == side3)
    {
        printf("Regular triangle\n");
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        printf("Isosceles triangle\n");
        if (side1 == side2)
        {
            if (side1 * side1 + side2 * side2 == side3 * side3)
            {
                printf("Isosceles rectangular triangle\n");
            }
        }
        else if (side2 == side3)
        {
            if (side2 * side2 + side3 * side3 == side1 * side1)
            {
                printf("Isosceles rectangular triangle\n");
            }
        }
        else if (side3 == side1)
        {
            if (side3 * side3 + side1 * side1 == side2 * side2)
            {
                printf("Isosceles rectangular triangle\n");
            }
        }
    }

    if (side1 * side1 + side2 * side2 == side3 * side3 || side2 * side2 + side3 * side3 == side1 * side1 || side3 * side3 + side1 * side1 == side2 * side2)
    {
        printf("rectangular triangle\n");
    }
    system("pause");
    return 0;
}
