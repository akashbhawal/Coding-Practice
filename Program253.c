#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdbool.h>
#include<string.h>


int main()
{
    char Fname[20];
    int fd=0;
    char Data[20];
    
    printf("Enter name of file\n");
    scanf("%s",Fname);

    fd=open(Fname,O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    // 0 starting point (3rd parameter)
    //1 Current pos
    //2 End point
    lseek(fd,10,0);  //lseek(kashat,kiti,kuthun)

    read(fd,Data,5);
    write(1,Data,5);

    return 0;
}