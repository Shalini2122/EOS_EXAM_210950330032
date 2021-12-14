#include<stdio.h>
#include <sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include<string.h>
#include<error.h>

int main(int argc,char const *argv[])
{
    int fdr,i,count=0,fd1[2],fd2[2];
    char str[100],cmp1="m",cmp2="M";
    pipe(fd1);
    pipe(fd2);
    pid_t id;
    if=fork();
    if(0==id)
    {
        close(fd1[1]);
    fdr=open("dictionary.txt",O_WRONLY);
    if(-1==fdr)
    {
        perror("error:\n");
        exit(EXIT_FAILURE);
    }
    for(i=0;i<466472;i++)
    {
        if(str[i]=="\n")
        {
        if((strcmp(&str[i],&cmp1)==0)||(strcmp(&str[i],&cmp2)==0))
        {
            count++;
            write(fd1[1],str[i],strlen(str)+1);
        }
        }
    }
    close (fd1[1]);
    close (fd2[1]);
    close(fdr);
    }
    return 0;
}