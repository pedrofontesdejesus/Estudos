#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	int num = 200;
	for(num = 0; num<=15; num++)
	{
		printf("dec:%d hex:%x char:%c oct:%o end.memo:%u\n", num, num, num, num,num);
    }
    return 0;
}
