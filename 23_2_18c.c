#include<stdio.h>
#include<fcntl.h>
int main(){
	
	int p,pp;
	p=getpid();
	pp=getppid();

	printf("\nprocess id: %d",p);
	printf("\nparent process id: %d",pp);



}
