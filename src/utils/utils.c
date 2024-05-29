/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <errno.h>

#include "utils.h"

#define _GNU_SOURCE

void error(const char* message)
{  
	fprintf(stderr, "%s: %s %s\n", program_invocation_short_name, message, strerror(errno);
exit(EXIT_FAILURE);	


}//error

void warn()

