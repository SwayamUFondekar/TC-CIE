//write an open mp program which launches a parallel region & it has each thread print its id and team size
#include <omp.h>
#include <stdio.h>

int main() {
    #pragma omp parallel
    {
        int thread_id = omp_get_thread_num();
        int team_size = omp_get_num_threads();
        printf("Thread ID: %d, Team Size: %d\n", thread_id, team_size);
    }

    return 0;
}
