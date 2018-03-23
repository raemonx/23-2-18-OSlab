#include<stdio.h>
#include<fcntl.h>
int main(){
int buff[5];

	int f=open("test.txt",O_RDONLY);
	if(f<0)
		printf("\nFile doesn't exist!!");
	else{
		int x=read(f,buff,sizeof(buff));
		if(x>0){
			printf("\nFile has  content!!");
		}
		else{
		printf("\nFile has no content!!");
		}
		}
}
