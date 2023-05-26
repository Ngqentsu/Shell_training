#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>


int main(void)
{
  pid_t pid;
  
  printf("First execution\n");

  pid = fork();

  if (pid == -1)
    {
      perror("Unsuccessful");
      return (1);
    }
  if (pid == 0)
    {
      printf("The child is here\n");
    }
  else
    {
      wait(NULL);
      sleep(30);
      printf("Parent\n");
    }
  return (0);
}
