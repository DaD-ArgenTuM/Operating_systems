#include<stdio.h>  
#include <fcntl.h>  
#include<stdlib.h>  
#include <unistd.h>  
#include <string.h>  
// I/O system Calls  
int main (void)  
{  
int fd[2];  
char buf1[12] = "hello world";  
char buf2[12];  
// assume foobar.txt is already created  
fd[0] = open("foobar.txt", O_RDWR);   
fd[1] = open("foobar.txt", O_RDWR);  
write(fd[0], buf1, strlen(buf1));   
write(1, buf2, read(fd[1], buf2, 12));  
close(fd[0]);  
close(fd[1]);  
return 0;  
} 