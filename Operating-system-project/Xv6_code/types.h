typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned char uchar;
typedef uint pde_t;
#ifndef PROC_INFO
#define PROC_INFO 4

struct ProcessInfo
{
    int pid;
    int memsize;
};
typedef struct ProcessInfo proc_info;


#endif



