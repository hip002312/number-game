//数当てゲーム
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#define ANSWER_MIN 1
#define ANSWER_MAX 100
#define TRUE 1
#define FALSE 0

int main(){
  srand((unsigned int)time(NULL));
  int answer = (rand() % ANSWER_MAX) + 1;
  char player;
  int count = 0;
  int isgame = TRUE;

  printf("%d から %d までの数字(整数)を当てるゲームです。\n", ANSWER_MIN, ANSWER_MAX);
  while (isgame == TRUE) {
	int guess = 0;
	printf("整数を入力してください: ");
	while ((player = getchar()) != '\n') {
	  if (!isdigit(player)) {
		printf("整数以外の値が入力されました。\n");
		printf("整数を入力してください: ");
		while (getchar() != '\n');
		guess = 0;
	  }
	  else {
		char digit = player - '0';
		guess = guess * 10 + digit;
	  }
#ifdef DEBUG

#endif // DEBUG

	}
	if ((guess < ANSWER_MIN) || (guess > ANSWER_MAX)) {
	  printf("Error! %d から %d までの整数を入力してください。\n", ANSWER_MIN, ANSWER_MAX);
	}
	else if (guess == answer) {
	  printf("Bingo!\n");
	  isgame = FALSE;	 
	}
	else if (guess < answer) {
	  printf("Small!\n");	
	}
	else {
	  printf("Big!!\n");
	}
	count++;
  }
  printf("Game Clear!! 正解は %d でした。\n", answer);
  printf("正解するまで%d回かかりました。\n", count);

  return 0;

 } 