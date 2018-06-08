#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "mainfunc.h"

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
      int pbegin = firstdealp();
      int pfinal;
      int dfinal;
      if (pbegin <= 21)
      {
	      pfinal = user(pbegin);
              dfinal = dealer(pfinal, dbegin);
	      if (pfinal <= 21 && dfinal <= 21)
     	      {
			printf("\nYou have %d, while the dealer has %d.", pfinal, dfinal); 
			if (pfinal > dfinal) {
		     		printf("\nYou win!");
				char messagewin[] = "You win!\n";
				output(messagewin, 9);
	     	 	} else if (pfinal < dfinal) {
		      		printf("\nYou lose...");
	     			char messagelose[] = "You lose...\n";
				output(messagelose, 12);
			} else if (pfinal == dfinal) {
		      		printf("\nIt was a tie."); 
				char messagetie[] = "It was a tie.\n";
				output(messagetie, 15);
			}
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
