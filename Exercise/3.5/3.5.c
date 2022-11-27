#include <stdio.h>
int main()
{
    int n, o, e, count;//letter o
    int number[100];
    printf("Input number of element to be store in array : ");
    scanf("%d", &n);
    printf("----\n");
    for (int o = 0; o < n; o++)//letter o
    {
        printf("Element[%d] : ", o + 1);
        scanf("%d", &number[o]);//letter o
    } 
    for (int o = 0; o < n; o++)//letter o
    {
        count = 1;
        for (e = o + 1; e <= n - 1; e++)//letter o
        {
            if (number[o] == number[e] && number[o] != 0)//letter o
            {
                count++;
                number[e] = 0;
            }
        } 
        if (number[o] != 0)//letter o
        {
            printf("%d -> %d\n", number[o], count);//litter o
        } 
    }
}

