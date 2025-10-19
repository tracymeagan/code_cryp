/* Program Description: Write a program to input three floating points number from the
keyboard to calculate the sum and average 

Author : Tracy Lienghotue

Date : 06/10/2025
*/
#include <stdio.h>

int main ()

{
    
    float num1 , num2 , num3;
    float sum = num1 + num2 + num3;
    float average = sum /3.0;

    printf("Please enter three floating point numbers:");
    scanf("%f , %f, %f " , &num1 , &num2 , &num3);

    printf(" The total sum is ", sum);
     printf("The average of the sum is %.3f\n", average );
    

    
    
    


    return 0;

}


