#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
void alarm1(){
	printf("\nAlarm after 2 sec\n");
	alarm(2);
}
int main(){
	signal(SIGALRM,alarm1);
	alarm(2);
	while(1);
	
}
