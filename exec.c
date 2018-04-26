#include <unistd.h>
#include <stdio.h>
 
int main(int argc, char **argv) {
     int r = execl("./sequential_min_max", "hello", "1", "10", NULL);
     printf("%d\n", r);
     return 0;
}
