#include<stdio.h>
#include<stdlib.h>
#include "endfunc.h"
void run_bash_script(const char *script_path) {
    // Use the system() function to execute the bash script
    int status = system(script_path);

    // Check the return status of the system() call
    // if (status == -1) {
    //     perror("Error running bash script");
    // } else {
    //     printf("Bash script '%s' executed successfully.\n", script_path);
    // }
}
