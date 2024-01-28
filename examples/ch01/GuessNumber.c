

// seprate imorted libraries used 
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Replaces everywhere it says "Max" with 1000 and everywhere it says "Min" with 1 
#define MIN 1
#define MAX 1000

// Made guessGame and isCorrect funcs to use later
void guessGame(void); 
bool isCorrect(int guess, int answer); 

int main(void) {
    //using time library to generate random time
   srand(time(0)); 

   // uses guess game func
   guessGame();
} // end main



// guessGame func - interacts with user and creates random answer for user to guess
void guessGame(void) {
    
    // Inistlize variables respons and guess
   int response =0;
   int guess = 0;

   // keeps looping untill the guess is correct then breaks the loop 
   do {

      // creates random answer for each game
      int answer = 1 + rand() % MAX;

      // Tells the user the range of the numbers he can guess in
      printf("I have a number between %d and %d.\n", MIN, MAX);

      // asks user for first guess
      puts("Can you guess my number?\n" 
           "Please type your first guess.");

      //checks
      printf("%s", "? ");
      

      // Takes users guess
      scanf("%d", &guess;
)
      // checks if users guess is correct, if not loops again.
      while (!isCorrect(guess, answer)) {
         scanf("%d", &guess);
      }


      puts("\nExcellent! You guessed the number!\n"
         "Would you like to play again?");
      printf("%s", "Please type (1=yes, 2=no)? ");
      scanf("%d", &response);
      puts("");

   } while (response == 1);
} // end function guessGame

// boolean func that checks is guess is right or wrong and displays too high or low if users guess is off
bool isCorrect(int guess, int answer) {

    // auto set to false 
    bool correct = false;

   // uf guess is correct set correct to true
   if (guess == answer) {
      correct = true;
   }

   // if guess is too high or low it displays the following - 
   if (guess < answer) {
      printf( "%s", "Too low. Try again.\n? " );
   }
   else {
      printf( "%s", "Too high. Try again.\n? " );
   }

   return correct;
} // end function isCorrect



/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
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
 **************************************************************************/
