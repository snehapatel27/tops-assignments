#include <stdio.h>

main() {
    int followerCount = 100;

    printf("Before increment: %d\n", followerCount);

    // Pre-increment
    printf("Pre-increment: %d\n", ++followerCount);
    printf("After pre-increment: %d\n", followerCount);

    // Post-increment
    printf("Post-increment: %d\n", followerCount++);
    printf("After post-increment: %d\n", followerCount);


}
