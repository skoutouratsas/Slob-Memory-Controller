#include <stdio.h>
#include <unistd.h>
#include <sys/syscall.h>
#define __NR_get_slob_amt_claimed 343
#define __NR_get_slob_amt_free 344

int main() {
int counter =1;
long long free=0;
long long claimed=0;
while(1){
	counter++;
	free+=syscall(354);
	claimed+= syscall(353);

	if (counter==10000000)
		break;
}
	printf("Free: %lld (bytes)\n", free/10000000);
	printf("Claimed: %lld (bytes)\n", claimed/10000000);
	return 0;
}


