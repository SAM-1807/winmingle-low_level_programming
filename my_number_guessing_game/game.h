#ifndef GAME_H
#define GAME_H

void get_player_name(char *buffer, int size);
char choose_difficulty(void);
void play_round(char difficulty, char *player_name);
void give_hint(int secret, int range_max, int hint_count);

#endif
