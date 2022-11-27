#include <stdio.h>
int main()
{
    int g,n,Gunnum,Total;// name anything 
    Gunnum=0;//gun number
    Total=9;
    printf("User Input : ");
    scanf("%d", &n);
    printf("##########\n");
    printf("Series = ");
    for (g = 1; g <= n; g++)
    {
        Gunnum = Gunnum + Total;
        printf("%d", Total);
        if (g <= n - 1)
        {
            printf(" + ");
        } 
        Total = Total * 10 + 9;
    } 
  printf("\n");
    printf("Gunnum = ");
    printf("%d  ", Gunnum);
} 

