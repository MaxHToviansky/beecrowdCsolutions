#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, bin1[32], bin2[32];
    scanf(" %d", &a);
    scanf(" %d", &b);
    //Int to bin conversion
     
    for (int i = 0; i<32; i++)
    {
        bin1[i] = a%2;
        a = a/2;
        
        bin2[i] = b%2;
        b = b/2;
    }

    //Addition - "Mofiz way"

    for (int i = 0; i<32; i++)
    {
        if((bin1[i] + bin2[i]) == 2){
            bin1[i] = 0;
        } else if ((bin1[i] + bin2[i]) == 1)
        {
            bin1[i] = 1;
        } else {
            bin1[i] = 0;
        }
    }
    
    
    // bin to int

    for (int i = 0; i<32; i++)
    {
        c = c + (bin1[i] * (1 << i));
    }
    printf("%d", c);
    return 0;
}