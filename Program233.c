#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>  //file control.h

int main()
{
	int fd=0;      //file descripter
	char Fname[20];

	printf("Enter file name\n");
	scanf("%s",Fname);

	fd=creat(Fname,0777);
	if(fd==-1)
	{
		printf("Unable to create file\n");
		return -1;
	}
	printf("File is succesfully created with fd %d\n",fd);


	return 0;
}