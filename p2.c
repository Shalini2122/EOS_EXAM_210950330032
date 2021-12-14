#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include<string.h>

int main(int argc,char const *argv[])
{
    unsigned char buff[466472];
    int fd1[2],fd2[2];
    pid_t id;
    id=fork();
    int fdr;
    int i;
    fdr=open("dictionary.txt",O_RDONLY);
    read(fdr,buff,466472);
    for(i=0;i<3000;i++)
    close(fd1[1])
    {
        read(fd1[0],str,10);
        if(buff[i]=="\n")
        {
            printf("%c",buff[i]);
            printf("-%ld\n",strlen(buff[i]));
            
        }
    }
    close(fd1[0]);
    close(fd2[0]);
   write(fd2[0],sr,strlen(str)+1);
    close(fdr);
    return 0;
}