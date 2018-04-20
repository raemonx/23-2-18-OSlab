#include<stdio.h>
#include<signal.h>
void fpe_handler(){
	printf("signal caught");
	exit(0);
}

int main(){
	int x,y;
	signal(SIGFPE,fpe_handler);
	printf("enter x and y:\n");
	scanf("%d%d",&x,&y);
	int z=x/y;
	printf("%d",z);
}
