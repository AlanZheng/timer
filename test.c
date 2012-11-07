#include <stdio.h>
#include <unistd.h>
#include "Timer.h"

int main(int argc, char **argv)
{
    Timer *t = new Timer();
#ifdef WIN32
	Sleep(1000);
    printf("time gone: %f\n", t->elapsed());
#else
	sleep(10);
    printf("time gone: %f\n", t->elapsed());
	t->restart();
	sleep(5);
    printf("time gone: %f\n", t->elapsed());
	t->restart();
    printf("time gone: %f\n", t->elapsed());
#endif
    return 0;
}
