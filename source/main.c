
#include "libg.h"


int loop(t_game *gamedata)
{
	//get time 
	struct timeval tv;
	static int wait;
	static long int end; 
	gettimeofday(&tv, NULL);
	long long current_time_us = (long long)tv.tv_sec * 1000000 + tv.tv_usec;


	if (!wait) {
		wait = 1;
		end = current_time_us + (1000000 / 60); 
	}
	if (current_time_us > end)
	{
		//printf("yes");
		wait = 0;
		update(gamedata);
		display(gamedata);
}
	return (1);
}




int main()
{
	t_game gamedata;
	set_default_gamedata(&gamedata);
}
