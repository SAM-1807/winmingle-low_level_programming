#include "game.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char name[32];
	char difficulty;
	char answer;

	srand(time(0));

	get_player_name(name, 32);
	printf("Welcome to the game, %s.\n", name);

	answer = 'y';
	while(answer == 'y' || answer == 'Y')
	{
		difficulty = choose_difficulty();
		play_round(difficulty, name);
		printf("Do you want to play again: (y/n): ");
		scanf(" %c", &answer);
	}

	printf("Thank you for playing, %s.\n", name);
	return(0);
}
