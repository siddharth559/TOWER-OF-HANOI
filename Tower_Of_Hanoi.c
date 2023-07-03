#include<stdio.h>
#include<stdlib.h>
#include "Strings.c"

int NUMBER_OF_MOVES = 0;
void tower_of_hanoi(char* RINGS, int FROM, int TO)
{
    int ALT = 6 - FROM - TO;
    int length_of_ring = lens(RINGS);
    if (length_of_ring == 1) {
        printf("TAKE %s FROM %d to %d\n", RINGS, FROM, TO);
        NUMBER_OF_MOVES ++;
        }
    else{
        tower_of_hanoi(slice(RINGS,0,length_of_ring-1),FROM, ALT);
        tower_of_hanoi(slice(RINGS,length_of_ring-1, length_of_ring), FROM, TO);
        tower_of_hanoi(slice(RINGS,0,length_of_ring-1),ALT, TO);
    }
}
int solve_and_count_TOH(char * RINGS)
{
    tower_of_hanoi(RINGS, 1, 3); 
    return NUMBER_OF_MOVES;
}
int main()
{
    int N = solve_and_count_TOH("12345");
    printf("%d", N);
}

