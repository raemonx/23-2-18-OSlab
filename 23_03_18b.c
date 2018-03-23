#include<stdio.h>
#include<fcntl.h>
void main(){
	char buff[100];
	int pipedes[2];

	int f=open("a.txt",O_RDONLY);

	int pd=pipe(pipedes);
	int b=read(f,buff,sizeof(buff));

	//pipe_parameter[1] for writing pipe_parameter[0] for reading
	write(pipedes[1],buff,b);
	int c=read(pipedes[0],buff,sizeof(buff));

	int g=open("b.txt",O_WRONLY);
	write(g,buff,c);

}
