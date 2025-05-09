#include<stdio.h>
int main()
{
    float amount, rate, time, interest;
    printf("Enter principal amount:\n");
    scanf("%f", &amount);
    printf("Your principal amount is: %f taka \n", amount);
    printf("Enter rate of interest:\n");
    scanf("%f", &rate);
    printf("Rate of interest in your principal amount is: %f \n", rate);
    printf("Enter the time in years you saved the amount:\n");
    scanf("%f", &time);
    interest = amount * rate * time / 100;
    printf("Congratulations! Your interest is %f taka :\n", interest);
    return 0;
}
