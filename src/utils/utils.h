/*
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/*
 Error handling 
*/
void 	error(const char* message);
void 	warn(const char* message);

/*
 Dynamic memory allocation 
*/

void 	*xmalloc(size_t size);
void 	*xrealloc(void *ptr, size_t size);
void 	*xfree(void *ptr);

/*
 Special utils 
*/


