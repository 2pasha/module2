#include <stdio.h>

int main()
{
    int k, positive = 0, N[k];
    
    do
    {
        printf("Enter number of: ");
        scanf("%i", &k);
    }
    while ( k < 1 || k > 100);
    
    for (int i = 0; i < k; i++)
    {
        scanf("%i", &N[i]);
        
        if ( N[i] > 0)
        {
            positive++;
        }
    }
    
    printf("%i\n", positive);
    
    if (positive!=0)
    {
        for (int i = 0; i < k; i++)
        {
            if ( N[i] > 0)
            {
                printf("%i ", N[i]);
            }
        }
    }
    else printf("NO");
}
