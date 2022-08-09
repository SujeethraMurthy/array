#include <stdio.h>
    void main()
    {
 
        int a[10], b[10];
        int i, j = 0, k = 0,age[] = {24,43,21,20,10,7,30,18};
        int n=sizeof(age)/sizeof(age[0]);
        for (i = 0; i < n; i++)
        {
            if (age[i] <=20)
            {
                b[j] = age[i];
                j++;
            }
            else if(age[i]>20)
            {
                a[k] = age[i];
                k++;
            }
        }
 
        printf("\nBelow 20 : \n");
        for (i = 0; i < k; i++)
        {
            printf("%d ", b[i]);
        }
 
        printf("\nAbove 20: \n");
        for (i = 0; i < j; i++)
        {
            printf("%d ", a[i]);
        }
 printf("\nno of above 20 : %d \n", j);
 printf("\nno of below 20 : %d \n", k);
    }
