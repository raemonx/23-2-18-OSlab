#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
int main(){
    int piped[2],f,k,z,p,pp,val;
    char buffer[1024];
    f=open("a.txt",O_RDWR);
    k=open("b.txt",O_RDWR);
    pipe(piped);
    val=read(f,buffer,sizeof(buffer));
    z=fork();
    if(z==0){
        close(piped[1]);
        read(piped[0],buffer[1],val);
        write(1,buffer[1],val);
        write(k,buffer[1],val);
        close(piped[0]);
        printf("Child process");
        p=getpid();
        pp=getppid();
        printf("%d,%d",p,pp);
        exit(0);
    }
    else if(z>0){
        close(piped[0]);
         write(piped[1],buffer,val);
         close(piped[1]);
         wait(NULL);
         printf("Child process");
        p=getpid();
        pp=getppid();
        printf("%d,%d",p,pp);
    }

    else{
            p=getpid();
        pp=getppid();
        printf("%d,%d",p,pp);

    }
    return 0;

}
