#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include<string.h>

int main(int argc,char const *argv[])
{
    unsigned char buff[466472];
    int fdr;
    int i;
    fdr=open("dictionary.txt",O_RDONLY);
    read(fdr,buff,466472);
    for(i=0;i<3000;i++)
    {
        if(buff[i]=="\n")
        {
            printf("%c",buff[i]);
            printf("-%ld\n",strlen(buff[i]));

        }
    }
    close(fdr);
    return 0;
}