/*
 * Standard includes
 */
#include <assert.h>
#include <limits.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
 * Networking includes
 */
#include <arpa/inet.h>
#include <unistd.h>

/*
 * This application's includes
 */
/* Include stack buffer pool code */
/* #include "buffer_pool.h" */
#include "main.h"

int main(int argc, char *argv[]) {
    /* Print header */
    printf("Azalyx 0.1-development - A C2 written using C with JPL coding standard restrictions.\n");

    /* Initialize buffer pools */

    /* Parse command arguments */
    for (int i = 0; i < argc && i < 20; i++) {
        printf("Argument %d: %s\n", i + 1, argv[i]);
    }
    /* Parse configuration file */

    /* Initialize variables/state based on configuration */

    /* Start service(s) */

    /* Save state */

    /* Clean up */
    return 0;
}
