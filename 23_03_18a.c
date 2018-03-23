#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

void main(){
	
	char buffer[1024];

	int f=open("a.txt",O_RDONLY);
	lseek(f,4,SEEK_SET);
	lseek(f,20,SEEK_CUR);
	lseek(f,-40,SEEK_END);
	if(f==-1)
		printf("File does not exists");
	else 
		
		printf("File exists");
	
	printf("\n");	
	
	int byte=read(f,buffer,sizeof(buffer));
	
		write(1,buffer,byte);
}
