#include <sys/ioctl.h> //getting win size
#include <unistd.h>
#include <stdlib.h> //system
#include <math.h> //math
#include <stdio.h>
#include "terminal_GE.h"

void init(int window_row_size, int window_col_size){
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w); // gets win row and win col

	while (w.ws_col != window_col_size || w.ws_row != window_row_size){
		printf("WRONG SIZE\n");
		ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
		printf("Current Size: (%d, %d)\n", w.ws_row, w.ws_col);
		printf("Desired Size: (%d, %d)\n", window_row_size, window_col_size);
		sleep(1);
		system("clear");
	}	
	printf("YES! CORRECT SIZE, please do not change your terminal anymore\n");

	// TO DO: fill the 2d array now, with [] or {} 
	printf("\033[38m\u2588po\n");

}


