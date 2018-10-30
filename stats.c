#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    struct stat * buffer=malloc(sizeof(struct stat));
    stat("./stats.c",buffer);
    printf("File Size: %ld \n",buffer->st_size);
    printf("Mode : %o\n",buffer->st_mode);
    printf("Time Last Accesed: %s\n", ctime(&(buffer->st_atime)));
}