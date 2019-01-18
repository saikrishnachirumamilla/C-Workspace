/*
 * pipe.cpp
 *
 *  Created on: 17-Jan-2019
 *      Author: saikrishnachirumamilla
 */




#include <stdio.h>
#include <unistd.h>

char String1[] = "Hello, this is the message from parent to child";
char String2[] = "Hello, this is the message from child to parent";

/*int main ()
{
  char buf[1024];
  int fds1[2], fds2[2];
  int childr, childw, parentr, parentw;

  pipe (fds1);
  pipe (fds2);
  childr = fds1[0];
  childw = fds2[1];
  parentr = fds2[0];
  parentw = fds1[1];

  if (fork() > 0)
  {  the parent process
    close (childr); close (childw);
    write (parentw, String1, sizeof (String1));
    read (parentr, buf, sizeof (String2));
    printf ("Parent: %s\n", buf);
  }
  else
  {  the child process
    close (parentr); close (parentw);
    write (childw, String2, sizeof (String2));
    read (childr, buf, sizeof (String1));
    printf ("Child: %s\n", buf);
  }
  return 0;
}*/
