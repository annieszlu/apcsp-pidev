#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int randint() {
	int num = (rand() % (12)) + 1;
  return num;
}

int intro() {
	printf("Welcome! I would like to play Blackjack.\n\nRules: in Blackjack, "
		   "the higher score wins as long as it's less than or equal to "
		   "21.\n\tA score OVER 21 busts.\n\tThe dealer must draw if their score is below 17 and "
		   "stay if they hit 17 or above.\n\tFor simplicity, all aces will be worth one point. " 
       "\n\tFor simplicity, Jacks are worth 11, Queens 12, and Kings 13. "
       "\n\tAll other cards are worth their face value. "
		   "Good luck!\n\nWould you like to play? (yes/no) ");
	char input[256];
	fgets(input, 256, stdin);
	sscanf(input, "%s", input);
	if (strcmp(input, "yes") == 0) {
		return 0;
		// yes, play the game
	} else {
		return 1;
	}
}

int firstdealp() {
	// player's first and second cards
	int p1 = randint();
	int p2 = randint();
	// player's score
	int ptotal = p1 + p2;
	printf("\nYou got a(n) %d and a(n) %d for a total of %d.", p1, p2, ptotal);
	return ptotal;
}

int firstdeald() {
	// dealer's first card
	int d1 = randint();
	printf("\nThe dealer is showing a %d, and the other card is hidden.", d1);
	return d1;
}

int user(int pscore) {
	printf("\nYou have %d. Would you like to hit or stay? ", pscore);
	char input[256];
	fgets(input, 256, stdin);
	sscanf(input, "%s", input);
	while (strcmp(input, "hit") == 0) {
		int pnew = randint();
		pscore = pscore + pnew;
		printf("\nYou got a(n) %d for a new total of %d.", pnew, pscore);
		if (pscore > 21) {
			printf("\nYou busted! The dealer wins.");
			break;
		} else {
			printf("\nYou have %d. Would you like to hit or stay? ", pscore);
			fgets(input, 256, stdin);
			sscanf(input, "%s", input);
		}
	}
	return pscore;
}

int dealer(int pscore, int dfirst) {
	int dealertotal;
	if (pscore <= 21) {
		int d2 = randint();
		dealertotal = dfirst + d2;
		printf("\nThe dealer turns over the hidden card. It is a(n) %d, so their "
			"total is %d.", d2, dealertotal);
		if (dealertotal > 21) {
			printf("\nThe dealer busted! You win!");}
		while (dealertotal < 17) {
			int dnew = randint();
			dealertotal = dealertotal + dnew;
			printf(
				"\n\nThe dealer must hit, because their score is less than 17. "
				"The dealer got a(n) %d for a new total of %d.",
				dnew,
				dealertotal);
			if (dealertotal > 21) {
				printf("\nThe dealer busted! You win!");
				break;
			}
		}
	}
	return dealertotal;
}
