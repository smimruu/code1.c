
//ET251075
#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    area = M_PI * radius * radius;  // M_PI is a constant in math.


    printf("The radius of the circle is: %.2f\n", radius);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
