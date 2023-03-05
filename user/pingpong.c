#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"
int atoi(const char *s);
int main(int argc, char *argv[]){
    int i, pid;
    int fd[2];
    char buf1[10] = {0};
    char buf2[10] = {0};
    pipe(fd);
    i = fork();
    if (argc != 1)
    {
        fprintf(2,"Uncorrect pingpong. Usage: pingpong\n");
        exit(1);
    }
    
    if (!i)
        {
            pid = getpid();
            while(!read(fd[1],buf1, 1));
            fprintf(1, "%d: received ping\n", pid);
            write(fd[0], buf1, 1);
            exit(0);
        }
        else{
            pid = getpid();
            write(fd[0], buf2, 1);
            wait(0);
            if (read(fd[1],buf1, 1))
            {
                fprintf(1, "%d: received pong\n", pid);
                exit(0);
            }
            exit(1);
        }
    return 0;
}