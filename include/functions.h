#ifndef FUNCTIONS_H
#define FUNCTIONS_H
 
void blinkRect(int, int, int, int);

void isrDebounce();
void isrDebounce2();

void moveRect();

int placeX(int, int, int, int, int, int, int, int);
int placeO(int,int,int);


bool checkWin();

void winnerIs();

void resetGame();

void drawCheck();

#endif