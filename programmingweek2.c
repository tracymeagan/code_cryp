/* Program Description : A program that displays the volume and surface area 
of a box with the given values of ....

Author : Tracy Lienghotue 

Date: 29/09/2025
*/

#include <stdio.h>

int main()
{
// inititalsing the variables and there data types

  int height = 10;
  float width = 2.5;
  float length = 11.5; 
  float volume = length * width* height;
  float surface_area = 6 * length *width; 


  // Printing the total volume using the float and its delimiter
  printf("The total volume of the box is %f\n" , volume);

//printing the total surface area of the box 
  printf("The total surface area of the box is %f" , surface_area);


  return 0;


  


    


}
