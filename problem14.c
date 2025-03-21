#include<stdio.h>
int main ()
{
    int sub;
    scanf("%d", &sub);
    if(sub > 79) printf("A+\n");
    if(74<sub && sub <79) printf("A\n");
    if(69<sub && sub <75) printf("A-\n");
    if(64<sub && sub <69) printf("B\n");
    if(59<sub && sub <65) printf("B-\n");
    if(54<sub && sub <59) printf("C\n");
    if(49<sub && sub <55) printf("C-\n");
    if(sub < 49) printf("F\n");

    return 0;
}
