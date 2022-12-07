#include <sys/ioctl.h> //getting win size
#include <unistd.h>
#include <stdlib.h> //system
#include <math.h> //math
#include <stdio.h>
	
int main(){
	struct winsize w;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
	for(;;){
		printf("Cols : %d\n", w.ws_col);
		for(int i = 0; i< floor(w.ws_col/2); i ++){
		ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
		printf("\033[32m[]");}
		sleep(1);
		//printf("\033[0m\n"); Clears everything
		system("clear");		
	}
	return 0;

}
