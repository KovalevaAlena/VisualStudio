/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n, i, max = 0;
    scanf("%d", &n);
    int s[n];
    for(i = 0;i < n; i++)
        scanf("%d", &s[i]);
        
    for(i = 0; i < n; i++)
    {
        if (s[i] % 2 == 0 && s[i] > max)
        max = s[i];
    }
    
    if (max = 0)
    printf("0");
    else
    printf("%d", max);
    
    return 0;
}
