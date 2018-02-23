#include<stdio.h>
#include<fcntl.h>

void main(){
	
	char buffer[1];

	int f=open("a.txt",O_RDWR);
	if(f==-1)
		printf("File does not exists");
	else 
		
		printf("File exists");
	
	printf("\n");	
	
	int byte=read(1,buffer,sizeof(buffer));
	while(byte>0){
		
	
		write(1,buffer,byte);
		byte=read(1,buffer,sizeof(buffer));
		
		continue;
		
		printf("Data is not present");	
	}
}
