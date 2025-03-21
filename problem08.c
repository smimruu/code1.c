#include<stdio.h>
#include<math.h>
int main ()
{
    int a[5],num;
    int i;
    for(i=0; i<=2; i++)
    {
        scanf("%d",&a[i]);
    }
    num=a[0];
    for(i=0; i<=2; i++)
    {
        if(a[i]>num)
        {
            num=a[i];
        }

    }
    printf("%d\n", num);


    return 0;
}



