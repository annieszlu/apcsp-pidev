#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
	srand(time(0));
	int play = 1;
  int answer = intro();
	while (play == 1)
  {
    if (answer != 0) {
		  printf("\nOkay, goodbye!\n");
      break;
	  } else {
      int dbegin = firstdeald();
      int pfinal = user(firstdealp());
      int dfinal = dealer(pfinal, dbegin);
      if (pfinal <= 21 && dfinal <= 21)
      {
        printf("\nYou have %d, while the dealer has %d.", pfinal, dfinal);
	      if (pfinal > dfinal) {
		      printf("\nYou win!");
	      } else if (pfinal < dfinal) {
		      printf("\nYou lose...");
	      } else if (pfinal == dfinal) {
		      printf("\nIt was a tie.");
  	    }
      }
      
      printf("\n\nWould you like to play again? (yes/no) ");
      char input[256];
	    fgets(input, 256, stdin);
	    sscanf(input, "%s", input);
      if (strcmp(input, "no") == 0) {
        printf("\nOkay, goodbye!\n");
        play = 0; }
	    }
  }
	
  
  
  // int num = (rand() % (upper - lower + 1)) + lower
	// generates random numbers in range [lower, upper]

	return 0;
}
