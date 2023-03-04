#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int atoi(const char *s);
int main(int argc, char *argv[]){
    int i;
    if (argc != 1)
    {
        fprintf(2,"Uncorrect sleeping. Usage: sleep [seconds]\n");
        exit(1);
    }
    else{
        i = atoi(argv[0]);
        sleep(i);
        exit(0);
    }
    return 0;
}