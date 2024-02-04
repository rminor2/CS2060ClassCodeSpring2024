// fig02_01.c
// A first program in C.
#include <stdio.h>

double calculateArea(double, double);
double calculateAverage(double, double);

// function main begins program execution 
int main(void) {
   double length, width, area, result, average;
   

   do {
      const char* str2 = "Enter the Lenght:";
      puts(str2);
      result = scanf("%lf", &length);

      while (getchar() != '\n');

      if (result != 1) {
         printf("That's not a number! Please try again.\n");
      }
   } while (result != 1);

   do {
      const char* str2 = "Enter the Width:";
      puts(str2);
      result = scanf("%lf", &width);

      while (getchar() != '\n');

      if (result != 1) {
         printf("That's not a number! Please try again.\n");
      }
   } while (result != 1);

   area = calculateArea(length, width);
   average = calculateAverage(length, width);

   printf("Length: %0.1f Width: %0.1f and Area is %0.1f \n", length, width, area);
   printf("The Average of the Lenght and Width is: %0.1f \n", average);

return 0;   
} // end function main 

double calculateArea(double num1, double num2) {
   return num1 * num2;
}

double calculateAverage(double num1, double num2) {
   return (num1 + num2) / 2;
}

/**************************************************************************
 * (C) Copyright 1992-2021 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
