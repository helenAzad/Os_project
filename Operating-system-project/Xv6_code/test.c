#include "types.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"
#include "user.h"
#include "x86.h"

int main(int argc, const char *argv[]){
    int pcount = atoi(argv[1])-1;
    int pids[NPROC];
    for (int i = 0; i < pcount; ++i){
        pids[i] = fork();
        if(!pids[i]){
            int random_num = ((i+1)*123456+(pcount-i)*654321);
            char *data = malloc(sizeof(char) * random_num);
            memset(data, random_num, sizeof(char) * random_num);
            while (1)
                ;}
    }
    sleep(25);
    proc_dump();
    for (int i = 0; i < pcount; ++i){
        kill(pids[i]);
        wait();
    }exit();
}

