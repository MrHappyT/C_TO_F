#include <stdio.h>
#define FIVE_D_NINE 5.0f/9.0f
#define F_VALUE 32.0f
int main(void)
{
    float x, result;  
    printf("enter f:");
    scanf("%f",&x);
    result =  ((x - F_VALUE) * FIVE_D_NINE);
    printf("%f",result);
    return 0;
    
}
/*
    Matthew.C 2023 11/28            Simple fahrenheit to celsius
*/