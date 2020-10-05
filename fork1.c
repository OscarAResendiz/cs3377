/*fork*/
#include <stdio.h>
#include <unistd.h>
main()
{
int i;
printf("Ready to work...\n");
i=fork();
printf("Fork Returned%d\n",i);
}
