#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100
#define MAX_MOVIES 10

void sortMovieNames(char movieNames[][MAX_LENGTH], int numMovies) {
    int i, j,cpr;
    char temp[MAX_LENGTH];

    for (i = 0; i < numMovies - 1; i++) {
        for (j = i + 1; j < numMovies; j++) {
            cpr=strcmp(movieNames[i], movieNames[j]);
            if(cpr>1){
                strcpy(temp, movieNames[i]);
                strcpy(movieNames[i], movieNames[j]);
                strcpy(movieNames[j], temp);
            }
        }
    }
}

int main() {
    char movieNames[MAX_MOVIES][MAX_LENGTH];
    int numMovies, i;

    printf("Enter the number of movies: ");
    scanf("%d", &numMovies);

    printf("Enter the names of the movies:\n");
    for (i = 0; i < numMovies; i++) {
        scanf("%s", movieNames[i]);
    }

    sortMovieNames(movieNames, numMovies);

    printf("\nSorted movie names:\n");
    for (i = 0; i < numMovies; i++) {
        printf("%s\n", movieNames[i]);
    }

    return 0;
}
